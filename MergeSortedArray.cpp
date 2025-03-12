#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            int i=m-1,j=n-1,k=m+n-1;
            while(i>=0 && j>=0 && k>=0){
                if(nums1[i]>nums2[j]){
                    nums1[k]=nums1[i];
                    i--;
                }
                else{
                    nums1[k]=nums2[j];
                    j--;
                }
                k--;
            }
            while(j>=0){
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
    };

int main(){
    int n,m;
    vector<int> nums1,nums2;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums1.push_back(x);
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        nums2.push_back(x);
    }
    Solution obj;
    obj.merge(nums1,n,nums2,m);
    for(int i=0;i<n+m;i++){
        cout<<nums1[i]<<" ";
    }
    return 0;
}
// Time Complexity: O(n+m)
// Space Complexity: O(1)