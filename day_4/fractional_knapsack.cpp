#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
bool comparator(const pair<int,int>&a,const pair<int,int>&b){
    double item1 = (double) a.second/a.first;
    double item2 = (double) b.second/b.first;

    return item1>item2;
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    //sorting items by value per weight
    sort(items.begin(),items.end(),comparator);
    double ans =0;
    for(int i=0;i<n;i++){
        if(items[i].first<=w){
            w-=items[i].first;
            ans+=items[i].second;
        }else{
            ans += (double)w * items[i].second / items[i].first;
            break;
        }
    }
    return ans;
}