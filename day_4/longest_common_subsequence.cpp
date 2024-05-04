#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int topdown(string& text1,string& text2,int i,int j,vector<vector<int>>& dp){
        if(i==text1.length()||j==text2.length())
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int ans;
        if(text1[i]==text2[j])
            ans=1+topdown(text1,text2,i+1,j+1,dp);
        else
            ans=max(topdown(text1,text2,i,j+1,dp),topdown(text1,text2,i+1,j,dp));
        dp[i][j]=ans;
        return dp[i][j];
    }
    //tabulation 
    int bottom_up(string a,string b){
        int n = a.size();
        int m= b.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                int ans=0;
                if(a[i]==b[j]){
                    ans= 1+dp[i+1][j+1];

                }else{
                    ans= max(dp[i+1][j],dp[i][j+1]);
                }
                dp[i][j]= ans;
            }

        }
        return dp[0][0];
    }
    int longestCommonSubsequence(string text1, string text2) {
        int i=0,j=0;
        // return recursive(text1,text2,i,j);
        vector<vector<int>> dp(text1.length()+1,vector<int>(text2.length()+1,-1));
        return bottom_up(text1,text2);
    }
};