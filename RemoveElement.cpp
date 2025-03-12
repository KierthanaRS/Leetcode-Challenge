#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int i=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j] != val){
                swap(nums[i],nums[j]);
                i++;
                }
            }
            return i;
            
        }
    };

int main(){
    int n;
    vector<int> nums;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int val;
    cin>>val;
    Solution obj;
    cout<<obj.removeElement(nums,val)<<endl;
    return 0;
}

// Time Complexity: O(n^2)