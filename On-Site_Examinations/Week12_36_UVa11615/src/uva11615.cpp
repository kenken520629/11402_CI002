#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , a , b , c;
    cin >> n;
    long long sum,MAX,stage,minus;
    while(n--){
        cin >> a >> b >> c;
        sum=pow(2,a)-1;
        MAX=max(b,c);
        for(int i=1; i<=a; ++i){
            if(MAX>pow(2,i-1) && MAX<pow(2,i+1)){
                stage=i+1;
                // cout << stage << endl;
                break;
            }
        }
        minus=0;
        for(int i=0; i<a-stage; ++i){
            minus+=pow(2,i+1);
        }
        // cout << "minus = " << minus << endl;
        cout << sum-minus << endl;
    }
    
    return 0;
}