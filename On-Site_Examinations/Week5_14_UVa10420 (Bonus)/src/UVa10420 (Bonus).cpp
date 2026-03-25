#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
int main(){
    int n;
    while(cin >> n){
        map<string , int> Map;
        string country , name;
        for(int i=0; i<n; ++i){
            cin >> country;
            // cin.ignore();可寫可不寫
            getline(cin , name); 
            Map[country]++;
        }
        for(auto& it: Map){
            cout << it.first << " " << it.second << endl;
        }
    }
    return 0;
}