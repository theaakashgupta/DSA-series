class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int>sum(10001, 0);

        for (int num:nums ){
            sum [num] += num;

        }


        vector<int>dp(10001, 0);

        dp[1] = sum[1];

        for (int i = 2 ; i < 10001 ; i++){
            dp[i] = max(dp[i-2] + sum[i] , dp[i-1]);


        }
        return dp[10000];


        
    }
};