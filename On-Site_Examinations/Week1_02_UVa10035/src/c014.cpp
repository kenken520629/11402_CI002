#include <iostream>
#include <string>
using namespace std;
int main(){
    int a , b , count=0 , x;
    while(cin >> a >> b){
        if(a==0 && b==0) break;
        x=0;
        count=0;
        while(a>0 || b>0){
            if(a%10 + b%10 + x >=10){
                x=1;
                count++;
            }
            else x=0;
            a/=10;
            b/=10;
        }
    if(count==0)
        cout << "No carry operation.\n";
    else if(count==1)
        cout << "1 carry operation.\n";
    else
        cout << count << " carry operations.\n";
    }    
    return 0;
}