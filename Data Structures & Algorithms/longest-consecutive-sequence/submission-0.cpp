class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        // Step 1: Sort the numbers
        sort(nums.begin(), nums.end());

        int count = 1;  // We start counting from 1, since a single number is a valid sequence
        int maxi = 1;   // The longest sequence found so far

        // Step 2: Iterate through the sorted list to find consecutive sequences
        for (int i = 1; i < nums.size(); i++) {
            // If the current number is consecutive to the previous one
            if (nums[i] == nums[i - 1] + 1) {
                count++;  // Increase the streak
            }
            // If it's not consecutive, reset the streak and compare with maxi
            else if (nums[i] != nums[i - 1]) {
                maxi = max(maxi, count);  // Update the longest sequence found so far
                count = 1;  // Reset the streak
            }
        }

        // Final check for the last streak
        return max(maxi, count);
    }
};
