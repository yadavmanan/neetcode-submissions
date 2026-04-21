class Solution {
public:

    bool caneat(vector<int> piles, int h, int k){
        int hours = 0;
        for(int pile : piles) {

            hours += (pile+k-1)/k;
        }
        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while(low<=high){
            int mid = low + (high-low) /2;
            if(caneat(piles, h , mid)){
                high = mid - 1;  
            }
            else{low = mid + 1;}

        }
        return low;
        
    }
};
// there are this many banans in the specific pile 
// we are having hours as h 
// we have to decide k such that - it is minim -> so that we can eat 
// all these in h hours 
// we will apply binary search on the choosing of k . 
// k is how many banans he can eat in a hour.

// check for k 1 - 
// so 1st pile done in an hour -> 2nd 