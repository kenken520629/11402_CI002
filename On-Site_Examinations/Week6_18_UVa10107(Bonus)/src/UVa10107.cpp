#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , mid;
    double res;
    vector<int> v;
    while(cin >> n){
        auto it = lower_bound(v.begin(),v.end(),n);
        v.insert(it,n);
        if(v.size()%2){
            mid = v.size()/2;
            res=v[mid];
        }
        else res = (v[v.size()/2] + v[v.size()/2-1])/2;
        cout << res << endl;
    }
    return 0;
}
