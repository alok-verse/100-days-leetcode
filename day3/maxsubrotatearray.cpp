/*
918. Maximum Sum Circular Subarray

Given a circular integer array nums of length n, return the maximum possible sum of a non-empty subarray of nums.

A circular array means the end of the array connects to the beginning of the array. Formally, the next element of nums[i] is nums[(i + 1) % n] and the previous element of nums[i] is nums[(i - 1 + n) % n].

A subarray may only include each element of the fixed buffer nums at most once. Formally, for a subarray nums[i], nums[i + 1], ..., nums[j], there does not exist i <= k1, k2 <= j with k1 % n == k2 % n
*/

//BRUTE FORCE
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int kadans(vector<int> nums){
        int currentsum=0;
        int maxsum=nums[0];
        for(int i=0;i<nums.size();i++){
            currentsum=max(nums[i],currentsum+nums[i]);
            maxsum=max(maxsum,currentsum);
        }
        return maxsum;
    }
    void rotate(vector<int>& nums,int k){
    int n=nums.size();
    k=k%n;
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());

    }

    int maxSubarraySumCircular(vector<int>& nums){
        int n=nums.size();
        int res=nums[0];
        for(int i=0;i<n;i++){
            rotate(nums,1);
            int currmax=kadans(nums);
            res=max(res,currmax);
        }
        return res;
    }
};

int main(){
vector<int> nums={1,-2,3,-2};
Solution obj;
int ans = obj.maxSubarraySumCircular(nums);
cout<<"Maximum sum of Circular subarray:"<<ans; 

return 0;
}