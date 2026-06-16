#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int k=1;
    while(getline(cin,s)){
        if(s=="end") break;
        vector<char> v;
        v.push_back(s[0]); 
        char t=s[0];
        for(int i=1; i<s.size(); ++i){
            bool flag=false;
            for(int j=0; j<v.size(); ++j){
                if(s[i]<=v[j]){
                    v[j]=s[i];
                    flag=true;
                    break;
                }  
            }
            if(!flag){
                v.push_back(s[i]);        
            }  
        }
        cout << "Case " << k++ << ": " << v.size() << endl;
    }
    return 0;
}
