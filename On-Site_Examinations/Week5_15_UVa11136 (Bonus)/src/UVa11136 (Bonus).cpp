#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m , k;
    while(cin >> n && n!=0){
        multiset<int> money;
        long long res=0;
        for(int i=0; i<n; ++i){
            cin >> m;
            for(int j=0; j<m; ++j){
                cin >> k;
                money.insert(k);
            }
            res+=*prev(money.end())-*money.begin();
            if(!money.empty()){
                money.erase(money.begin());
                money.erase(prev(money.end()));//如果輸入特定數字，會把全部特定數字全部刪除，因此傳入迭代器
            }
        }
        cout << res << endl;
    }
    return 0;
}
// 5
// 3 1 2 3
// 2 1 1
// 4 10 5 5 1
// 0
// 1 2
// 2
// 2 1 2
// 2 1 2
// 0
