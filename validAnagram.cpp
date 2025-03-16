#include <bits/c++.h>
using namespace std;
class Solution {
    public:
        bool isAnagram(string s, string t) {
            map<char,int>s1,t1;
            for(auto ch :s) s1[ch]+=1;
            for(auto ch : t) t1[ch]+=1;
            for(auto key: s1){
                if(s1[key.first] != t1[key.first]) return false;
            }
            for(auto key:t1){
                if(t1[key.first] != s1[key.first]) return false;
            }
            return true;
            
        }
    };


int main(){
    string s,t;
    cin>>s;
    cin>>t;
    Solution obj;
    cout<<obj.isAnagram(s,t);
    return 0;
}