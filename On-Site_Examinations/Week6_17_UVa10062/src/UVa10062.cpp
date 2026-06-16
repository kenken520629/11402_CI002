#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        int total=0;
        vector<int> v(250,0);
        for(int i=0; i<s.size(); ++i){
            int t=s[i];
            v[t]++;
            total++;
        }
        for(int i=1; i<=total; ++i){
            for(int j=v.size()-1; j>=0; --j){
                if(v[j]==i){
                    cout << j << " " << i << endl;    
                }
            }
        }
        cout << endl;
    }
    return 0;
}