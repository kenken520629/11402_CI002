#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> v;
        if(s==" ") return true;
        for(int i=0; i<s.size(); ++i){
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122) ||(s[i]>='0' && s[i]<='9')) 
                v.push_back(tolower(s[i]));
        }
        int vsize=v.size();
        if(vsize==0) return true;
        for(int i=0; i<vsize/2; ++i){
           if(v[i]!=v[vsize-1-i]) return false;
        }
        return true;
    }
};