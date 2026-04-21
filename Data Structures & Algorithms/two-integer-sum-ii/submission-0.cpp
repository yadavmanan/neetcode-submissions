class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> pair;
        int low = 0;
        int high = numbers.size() - 1;
        
        while (low < high) {
            int sum = numbers[low] + numbers[high];
            if (sum == target) {
                return {low + 1, high + 1};  // return 1-based indices
            } else if (sum < target) {
                low++;  // increase the sum by moving the left pointer
            } else {
                high--;  // decrease the sum by moving the right pointer
            }
        }
        
        return pair;  // return an empty vector if no solution is found
    }
};
