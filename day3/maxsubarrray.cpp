/* 
53. Maximum Subarray
Solved
Medium
Topics
premium lock icon
Companies
Given an integer array nums, find the subarray with the largest sum, and return its sum.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6 */
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int maxSubArray(vector<int>& nums){
        int currentsum=0;
        int maxsum=nums[0];
        for(int i=0;i<nums.size();i++){
            currentsum=max(nums[i],currentsum+nums[i]);
            maxsum=max(maxsum,currentsum);
        }
        return maxsum;
    }
};
int main(){
vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
Solution obj;
int ans=obj.maxSubArray(nums);
cout<<"Maximum subarray sum :"<<ans;
return 0;
}