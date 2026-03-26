#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        bool isp=true;
        int ssize = s.size();
        vector<char> v(ssize , 0);
        
        for(int i=0; i<s.size(); ++i){
            v[i]=s[ssize-1-i];
        }
        for(int i=0; i<s.size(); ++i){
            if(v[i]!=s[i]){
                isp = false;
                break;
            }
        }
        if(isp) return true;
        else return false;
    }
};