class Solution {
public:
    int myAtoi(string s) {
        bool ckspa=true, cksign=true ,start=false;
        long long flag=0,ans=0,sign=1;

        for(int i=0; i<s.size(); ++i){
            if(ckspa && cksign){
                if(s[i]==' ') continue;
                else if(s[i]=='+' || s[i]=='-' || isdigit(s[i])){
                    if(s[i]=='-') sign=-1;
                    flag=(isdigit(s[i])) ? i : ++i; 
                    cksign = false;
                    start=true;
                    break;
                }
                else break;
            }      
        }
        if(!start) return 0;

        for(int i=flag; i<s.size(); ++i){
            if(isdigit(s[i])){
                ans=ans*10+s[i]-'0';
                if(ans*sign>=INT_MAX) return INT_MAX;
                if(ans*sign<=INT_MIN) return INT_MIN;
            }
            else break;
        }
        return ans*sign;
    }
};