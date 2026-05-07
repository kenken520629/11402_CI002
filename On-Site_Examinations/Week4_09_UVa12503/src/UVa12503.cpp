#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m , index;
    string s;
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> m;
        vector<bool> v(m);
        int point=0;
        for(int j=0; j<m; ++j){
            cin >> s;
            if(s=="LEFT"){
                point--;
                v[j]=false;
            }    
            else if(s=="RIGHT"){
                point++;
                v[j]=true;
            }
            else{
                cin >> s;
                cin >> index;
                if(v[index-1]){
                    point++;
                    v[j]=true;
                }    
                else{
                    point--;
                    v[j]=false;
                }    
            }
            // cout << "j = " << j << "  " << "v[j] = " << v[j] << " point = " << point << endl;
        }
        cout << point << endl;
    }
    return 0;
}