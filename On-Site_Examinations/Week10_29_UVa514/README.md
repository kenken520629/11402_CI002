```cpp
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
```
這題在檢查s.top()時沒有先檢查s.empty()導致卡了很久
然後我的程式碼檢測1~n是否符合target[check]時還需要檢查top是否也符合target[check]太麻煩了
所以可以用統一push再檢測的方式
```cpp
while(left<=n){
    s.push(left);
    while(!s.empty()&&s.top()==target[check]){
        s.pop();
        check++;
    }
    flag++;
}
```
且輸入的部分可以採用
```cpp
while (cin >> n && n != 0) {
    while (cin >> m1 && m1 != 0) {}
}
```
較美觀