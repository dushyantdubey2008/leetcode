class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int sum =0;
        int mini = INT_MAX;
        for(int i =0; i<n; i++){
            sum= sum + nums[i];
            mini= min(mini, nums[i]);
        }
        int m = sum - (mini*n);
        return m ;
    }
};// kafi aacha question h 
// sum + m*(n-1) = p*n
// p = mi + m
// sum + mn - m =(mi+m)n
// m = sum - mi*n