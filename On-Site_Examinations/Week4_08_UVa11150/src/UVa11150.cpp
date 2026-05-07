#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin >> n){
        int sum=n;
        while(n>2){
            sum++;
            n-=2;
        }
        if(n==2) sum++;
        cout << sum << endl;
    }
    return 0;
}