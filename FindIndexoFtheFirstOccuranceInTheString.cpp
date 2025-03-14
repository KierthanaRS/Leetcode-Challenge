class Solution {
    public:
        int strStr(string haystack, string needle) {
            int n=needle.size();
            vector<int> res(n);
            res[0]=0;
            int i=0,j=1;
            while(j<n){
                if(needle[i]== needle[j]){
                    i++;
                    res[j]=i;
                    j++;
                }
                else{
                    if(i != 0){
                        i=res[i-1];
                    }
                    else{
                        res[j]=0;
                        j++;
                    }
                }
            }
    
            i=0;
            j=0;
            while(i<haystack.size()){
                if(haystack[i]==needle[j]){
                    i++;
                    j++;
                    if(j==n) return i-j;
                }
                else{
                    if(j!=0) j=res[j-1];
                    else i++;
                }
            }
            return -1;
            
        }
    };