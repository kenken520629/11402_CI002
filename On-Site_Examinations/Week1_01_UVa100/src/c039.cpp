#include <iostream>
using namespace std;
int main(){
    int a , b;
    while(cin >> a >> b){
        int count=1 , MAX=0;
        for(int i=min(a,b); i<=max(a,b); ++i){
            int x = i;
            count=1;
            while(x!=1){
                if(x%2) x=3*x+1;
                else x/=2;
                count++;
            }
            MAX = max(MAX , count);
        }
        cout << a << " " << b << " " << MAX << endl;
    }
    return 0;
}