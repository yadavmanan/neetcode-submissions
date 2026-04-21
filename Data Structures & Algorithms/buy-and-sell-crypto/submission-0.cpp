class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxpro=0;
        int mini = INT_MAX;
        for(auto price:prices){
            mini = min(mini, price);
            maxpro = max(maxpro, price-mini);
        }
        return maxpro;
        
    }
};
