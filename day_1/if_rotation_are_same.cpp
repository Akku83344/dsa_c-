#include<iostream>
using namespace std;
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()){
            return false;
        }
        int n= s.length();
        //trying rotating 's' to generate all possible configuration
        for(int i=0;i<n;i++){
            if(s==goal){
                return true;
            }
            char temp= s[0];
            for(int i=0;i<n-1;i++){
                s[i]=s[i+1];
            }
            s[n-1]=temp;
        }
        return false;
    }
};