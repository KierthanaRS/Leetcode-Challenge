#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            for(int i=0;i<nums.size();i++){
                if(nums[i]==val){
                    bool flag=false;
                    for(int j=i+1;j<nums.size();j++){
                        if(nums[j] != val){
                            swap(nums[j],nums[i]);
                            flag=true;
                            break;
                        }
                    }
                    if(!flag) return i;
                }
            }
            return nums.size();
            
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