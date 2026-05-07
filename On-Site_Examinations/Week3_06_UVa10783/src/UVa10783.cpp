#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m , k , Case=1;
    cin >> k;
    for(int j=0; j<k; ++j){
        cin >> n >> m;
        long long sum=0;
        for(int i=min(n,m); i<=max(n,m); ++i){
            if(i%2) sum+=i;
        }
        cout << "Case " << Case++ << ": " << sum << endl;
    }
    return 0;
}