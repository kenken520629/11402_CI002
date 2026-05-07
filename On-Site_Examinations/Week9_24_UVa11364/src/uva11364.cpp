#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m , a;
    cin >> n;
    while(n--){
        cin >> m;
        vector<int> v;
        for(int i=0; i<m; ++i){
            cin >> a;
            v.push_back(a);
        } 
        sort(v.begin(),v.end());
        cout << 2*(v[m-1]-v[0]) << endl;
    }
    return 0;
}