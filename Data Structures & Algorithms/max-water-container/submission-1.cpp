class Solution {
public:
    int maxArea(vector<int>& heights) {
        // water -> 
        int right = heights.size()-1;
        int left = 0;
        int ans = 0;
        while( left<= right ){
            int area = min(heights[left],heights[right]) * (right - left);
            ans = max(ans, area);
            if(heights[left]<heights[right]){
                left ++;
            }
            else{
                right --;
            }
        }
        return ans;
    }
};
