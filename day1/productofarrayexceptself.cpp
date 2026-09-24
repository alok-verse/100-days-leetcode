#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
vector<int> productexceptself(vector<int>& nums){
    int n=nums.size();
    vector<int> ans(n,1);
    //left product except self
    int left=1;
    for(int i=0;i<n;i++){
        ans[i]=left;
        left*=nums[i];
    }
    //right product except self
    int right=1;
    for(int i=n-1;i>=0;i--){
        ans[i]*=right;
        right*=nums[i];
    }
    return ans;
}
};
int main(){
int n;
cout<<"Enter the size of vector:";
cin>>n;
vector<int> nums;
for(int i=0;i<n;i++){
    cout<<"Enter:";
    int val;
    cin>>val;
    nums.push_back(val);
}
 Solution obj;
 vector<int> ans=obj.productexceptself(nums);
 cout<<"Product of Array except self:";
 cout<<"[ ";
 for (int value : ans) {
     cout << value << ' ';
    }
cout<<"]";
    return 0;
}