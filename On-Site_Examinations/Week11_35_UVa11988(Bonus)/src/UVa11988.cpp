#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        deque<int> deq;
        queue<int> q;
        for(int i=0; i<s.size(); ++i){
            if(s[i]!='['){
                deq.push_back(s[i]);    
            }
            else{
                while(s[i]!=']'){
                    cout << "push_front : " << s[i] << endl;
                    deq.push_front(s[i]);
                    i++;
                }    
            }
        }

        for(int i=0; i<deq.size(); ++i){
            if(s[i]!='[' && s[i]!=']') cout << char(deq[i]);
        }
        cout << endl;
    }
    


    return 0;
}
