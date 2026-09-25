/*
121. Best Time to Buy and Sell Stock

You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int buyandsellstock(vector<int> nums){
        int minprice=nums[0];
        int maxprofit=0;
        for(int i=1;i<nums.size();i++){
            //update minimum
            minprice=min(minprice,nums[i]);
            //calculate profit
            int profit=nums[i]-minprice;
            //update max
            maxprofit=max(maxprofit,profit);
        }
        return maxprofit;
    }
};
int main(){
vector<int> nums ={7,1,5,3,6,4};
Solution obj;
int ans=obj.buyandsellstock(nums);
cout<<"Maximum profit will be :"<<ans;
return 0;
}