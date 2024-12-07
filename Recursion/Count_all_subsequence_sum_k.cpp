class Solution{

    private:
    int func(int ind, int sum, vector<int> &nums) {
        if( sum == 0) return 1;
        if( sum < 0 || ind == nums.size()) return 0;
        int path1 = func(ind + 1, sum - nums[ind], nums);
        int path2 = func(ind + 1, sum, nums);

        return path1 + path2;
    }

    public:    	
    int countSubsequenceWithTargetSum(vector<int>& nums, int k){
    	//your code goes here
        return func(0, k, nums);
    }
};