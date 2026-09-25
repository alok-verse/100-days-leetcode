/*217. Contains Duplicate:

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
Example 1:

Input: nums = [1,2,3,1]

Output: true

Explanation:

The element 1 occurs at the indices 0 and 3.
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
bool containduplicate(vector<int>& nums){
    unordered_set<int> seen;
    for(int num:nums){
        if(seen.find(num)!=seen.end()){
            return true;
        }else{
            seen.insert(num);
        }
    }
    return false;
}
};
int main(){
    vector<int> nums ={1,2,3,1};
    Solution obj;
    bool ans = obj.containduplicate(nums);
    cout<<"The answer is :"<<boolalpha<<ans;
    return 0;
}
