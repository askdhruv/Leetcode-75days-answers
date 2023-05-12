class Solution {
public:
    bool checkSum(int i,int sum,vector<int> &nums,vector<vector<int>> &dp){
        if(sum==0)return true;
        if(i==0)return nums[0]==sum;
        if(dp[i][sum]!=-1)return dp[i][sum];
        bool notake=checkSum(i-1,sum,nums,dp);
        bool take=false;
        if(sum>=nums[i])take=checkSum(i-1,sum-nums[i],nums,dp);
        return dp[i][sum]=take||notake;
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto num:nums)sum+=num;
        if(sum%2!=0)return false;
        vector<vector<int>> dp(nums.size(),vector<int>(sum+1,-1));
        return checkSum(nums.size()-1,sum/2,nums,dp);
    }
};
