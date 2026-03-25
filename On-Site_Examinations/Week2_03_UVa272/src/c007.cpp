#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int count = 0;
    while(getline(cin , s)){
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == '"'){
                if(count % 2 == 1){
                    cout << "''";
                    count++;
                }
                else{ 
                    cout << "``";
                    count++;                           
                }
            }    
            else 
                cout << s[i];
        }
        cout << "\n";     
    }
    return 0;
}