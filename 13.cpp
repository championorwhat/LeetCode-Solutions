class Solution {
public:
    int romanToInt(string s) {
        map<char,int>m;
        m={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int total=0,pre_val=0;
        for(int i=s.size()-1;i>=0;i--){
            if(m[s[i]]<pre_val){
                total-=m[s[i]];
            }
            else{
                total+=m[s[i]];
            }
            pre_val=m[s[i]];
        }
        return total;
    }
};
