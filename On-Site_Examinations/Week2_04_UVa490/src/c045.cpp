#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    char a[100][100]={};
    int Len[100]={};
    int len=0 , MAX=0;
    while(getline(cin , s)){
        int t = s.size();
        Len[len]=t;
        MAX = max(MAX , t);
        for(int j=0; j<s.size(); ++j)
            a[len][j] = s[j];
        len++;
    }

    for(int i=0; i<MAX; ++i){
        for(int j=len-1; j>=0; j--){
            if(i<Len[j])
                cout << a[j][i];
            else 
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
// 當前i有沒有超過那行的長度!!!