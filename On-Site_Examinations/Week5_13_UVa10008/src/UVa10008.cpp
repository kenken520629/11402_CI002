#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int n , count=0;
    char a='A';
    vector<int> v(150);
    string s;
    cin >> n;
    cin.ignore(100, '\n');
    while(getline(cin , s)){
        for(int i=0; i<s.size(); ++i){
            int t=int(toupper(s[i]));
            v[t]++;
            count++;
        }
    }
    for(int i=count; i>0; --i){
        for(char j='A'; j<='Z'; ++j){
            if(v[j]==i){
                cout << j << " " << v[j] << endl;
            }
        }
    }
    return 0;
}