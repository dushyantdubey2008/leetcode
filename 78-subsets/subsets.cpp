class Solution {
public:
    vector<vector<int>>ans;
    void solve(int n , vector<int>& sub, int i,vector<int>& nums){
        if(i==n){
            ans.push_back(sub);
            
            return ;
        }
        sub.push_back(nums[i]);
        solve(n , sub, i+1,nums);
        sub.pop_back();
        solve(n , sub, i+1,nums);
        return ;

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int> sub;
        int i =0;
        solve(n, sub,i,nums);
        return ans;
    }
};
//tc O(n*2^n)
// sc O(n)