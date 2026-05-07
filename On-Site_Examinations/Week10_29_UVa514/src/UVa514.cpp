#include <bits/stdc++.h>
using namespace std;
int main(){     
    int n , m1 , m2;
    while(cin >> n){
        if(n==0) break;
        while(cin >> m1){
            if(m1<=0 || m1>n){
                cout << endl;
                break;
            }     
            vector<int> target;
            stack<int> s;
            target.push_back(m1);
            for(int i=1; i<n; ++i){
                cin >> m2;
                target.push_back(m2);
            }
            int left=1,check=0;
            bool flag=true;
            while(left<=n){
                if(left!=target[check]){
                    if(!s.empty()){
                        while(!s.empty() && s.top()==target[check]){
                            check++;
                            s.pop();
                        }
                    }
                    s.push(left);
                }
                else check++;
                while(!s.empty() && s.top()==target[check]){
                    check++;
                    s.pop();
                }
                left++;
            }
            if(s.empty()&&flag) cout << "Yes\n";
            else cout << "No\n";
        }
    }
    return 0;
}
