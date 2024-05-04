#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int solve_rec(int n){
        if(n==1 || n==0){
            return 1;
        }
        return solve_rec(n-1) + solve_rec(n-2);
    }
    //memorization
    int solve_mem(int n,vector<int>&dp){
        if(n==0 || n==1){
            return 1;
        }
        if(dp[n]!=-1){
            return dp[n];
        }

    }
    int sovle_tab(int n){
    vector<int>dp(n+1);
    dp[0]=dp[1]=1;
    for (int i = 2; i <= n; i++) {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
}
int climbStairs(int n) {
        vector<int>dp(n+1);
        return sovle_tab(n);
    }
};