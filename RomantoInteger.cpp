class Solution {
    public:
        int romanToInt(string s) {
            unordered_map <string,int> smap={{"I",1},{"V",5},{"X",10},{"L",50},{"C",100},{"D",500},{"M",1000}};
            int tot=0;
            for(auto ch : s){
                tot += smap[string(1,ch)];
                
            }
            if(s.contains("IV")) tot-=2;
            if(s.contains("IX")) tot-=2;
            if(s.contains("XL")) tot-=20;
            if(s.contains("XC")) tot-=20;
            if(s.contains("CD")) tot-=200;
            if(s.contains("CM")) tot-=200;
    
            return tot;
            
        }
    };