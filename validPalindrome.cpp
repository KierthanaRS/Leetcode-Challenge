#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool isPalindrome(string s) {
            int l=0,r=s.size()-1;
            bool flag=true;
            while(l<r){
                if(!isalpha(s[l]) && ! isdigit(s[l])) l++;
                else if(! isalpha(s[r]) && ! isdigit(s[r]))r--;
                else{
                    if(tolower(s[l]) == tolower(s[r])){
                        l++;
                        r--;
                    }
                    else
                    {
                        flag=false;
                        break;
                    }
                }
            }
            return flag;
            
        }
    };


int main(){
    string s;
    cin>>s;
    Solution obj;
    cout<<obj.isPalindrome(s);
    return 0;   

}