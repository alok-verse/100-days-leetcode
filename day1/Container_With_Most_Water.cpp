#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
int maxarea(vector<int>& height){
    int maxwater=0;
    int left=0,right=height.size()-1;
    while(left<right){
        int h=min(height[left],height[right]);
        int w=right-left;
        int area=h*w;
        maxwater=max(maxwater,area);
//update left right
        if(height[left]<height[right]){
            left++;
        }else right--;
    }
    return maxwater;
}
};
int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};
    Solution obj;
    int ans=obj.maxarea(height);
    cout<<"Maximum water :"<<ans;
    return 0;
}
