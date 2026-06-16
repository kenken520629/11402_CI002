#include <bits/stdc++.h>
using namespace std;
int main(){
    long long p , c , t , k , count=1;
    string s;
    while(cin >> p >> c && (p !=0 || c!=0)){
        cout << "Case " << count++ << ":\n";
        deque<int> deq;
        for(int i=0; i<min(p,c); ++i){
            deq.push_back(i+1);
        }
        for(int i=0; i<c; ++i){
            cin >> s;
            if(s=="N"){
                cout << deq.front() << endl;
                deq.push_back(deq.front());
                deq.pop_front();
            }
            else{
                cin >> k;
                auto it = find(deq.begin(),deq.end(),k);
                if(it!=deq.end()){
                    deq.erase(it);
                }
                deq.push_front(k);
            }
        }
    }


    return 0;
}
