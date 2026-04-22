class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int num:nums){
            pq.push(num);
            if(pq.size()>k){
                pq.pop();
            }
        }
        return pq.top();
    }
        
};


// kth largest element in the array
// make a map -> with freq -
// push it in the maxheap -> 
//then while k--
// pop - and then return the top of the heap that will be the kth largest
// min heap -> 