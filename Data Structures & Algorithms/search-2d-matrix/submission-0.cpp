class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        // Iterate through each row
        for (int i = 0; i < n; i++) {
            // Get the first and last element of the current row
            int low = matrix[i][0];
            int high = matrix[i][m - 1];
            
            // Check if target lies within the range of the current row
            if (target >= low && target <= high) {
                // Apply binary search on this row
                int left = 0;
                int right = m - 1;
                
                while (left <= right) {
                    int mid = left + (right - left) / 2;
                    
                    if (matrix[i][mid] == target) {
                        return true;
                    }
                    else if (matrix[i][mid] < target) {
                        left = mid + 1;
                    }
                    else {
                        right = mid - 1;
                    }
                }
            }
        }
        return false;
    }
};
