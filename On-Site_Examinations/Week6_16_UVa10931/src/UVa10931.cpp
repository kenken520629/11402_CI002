#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin >> n){
        vector<int> v;
        while(n>0){
            v.push_back(n%2);
            n/=2;
        }
        int count=0;
        cout << "The parity of ";
        for(int i=v.size()-1; i>=0; --i){
            cout << v[i];
            if(v[i]) count++;
        }
        cout << " is " << count << " (mod 2).\n";
    }
    return 0;
}