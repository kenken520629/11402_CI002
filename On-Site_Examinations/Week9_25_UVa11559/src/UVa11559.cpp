#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , b , h , w , p , beds;
    while(cin >> n >> b >> h >> w){
        int sum=0,MIN=1000000;
        for(int i=0; i<h; ++i){
            cin >> p;
            for(int j=0; j<w; ++j){
                cin >> beds;
                if(beds>=n){
                    sum=p*n;
                    MIN=min(MIN,sum);
                }
            }
        }
        if(MIN<=b) cout << MIN << endl;
        else cout << "stay home\n";
    }
    return 0;
}