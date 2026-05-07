#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m , s;
    while(cin >> n >> s){
        bool isbigger=false;
        vector<int> v;
        for(int i=0; i<n; ++i){
            cin >> m;
            v.push_back(m);
        }
        int L=0 , R=v.size() , sum=0 , MIN=n+1 ,res=0;
        for(int R=0; R<v.size(); ++R){
            sum+=v[R];
            while(sum>=s){
                isbigger=true;
                MIN=min(MIN,R-L+1);
                sum-=v[L];
                L++;
            }
        }
        if(isbigger)
            cout << MIN << endl;
        else 
            cout << 0 << endl;
    }    
    return 0;
}
// 10 15
// 5 1 3 5 10 7 4 9 2 8
// 5 11
// 1 2 3 4 5