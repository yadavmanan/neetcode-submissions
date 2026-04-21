class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map;  // To store number and its index
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];  // Find complement
            
            // If complement exists in map, we found the solution
            if (num_map.find(complement) != num_map.end()) {
                return {num_map[complement], i};  // Return indices of the two numbers
            }
            
            // If complement doesn't exist, store current number and its index in the map
            num_map[nums[i]] = i;
        }

        // If no solution found, return an empty vector (can also throw an exception)
        return {};
    }
};
