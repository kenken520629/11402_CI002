#include <bits/stdc++.h>
using namespace std;
int main(){
    map <char,char> m=
    {
        {')','('},
        {']','['}
    };
    string s;
    int n;
    cin >> n;
    cin.ignore(100,'\n');
    while(n--){
        bool flag=true;
        getline(cin,s);
        stack<char> v;

        for(int i=0; i<s.size(); ++i){
            if(s[i]=='('||s[i]=='[') v.push(s[i]);
            else{
                if(v.empty() || v.top()!=m[s[i]]){//遇到右括號，但stack的top為空或不為對應的括號
                    flag=false;
                    break;
                }
                else v.pop();
            }
        }

        if(flag&&v.empty()) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}