## 錯誤code
```cpp 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m , a;
    while(cin >> n >> m){
        vector<int> v(n);
        int count=1,sum=0;
        for(int i=0; i<n; ++i){
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for(int i=v.size()-1; i>1; --i){
            if(v[i]-v[i-1]){
                sum+=v[i-1]+v[i];
                count++;
            }
            else{
                sum=0;
                count=1;
            }
            if(sum>=m){
                cout << count << endl;
                break;
            }
        }
    }
    return 0;
}
```
## 正確code
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m , s;
    while(cin >> n >> s){
        bool isbigger=false;
        vector<int> v;
        for(int i=0; i<n; ++i){
            cin >> m;
            v.push_back(m);
        }
        int L=0 , R=v.size() , sum=0 , MIN=n+1 ,res=0;
        for(int R=0; R<v.size(); ++R){
            sum+=v[R];
            while(sum>=s){
                isbigger=true;
                MIN=min(MIN,R-L+1);
                sum-=v[L];
                L++;
            }
        }
        if(isbigger)
            cout << MIN << endl;
        else 
            cout << 0 << endl;
    }    
    return 0;
}
```
## 【解題感想】
我以為題目是叫我找最少任意數字組合加總會大於S，但結果是要用尺取法，方向完全錯誤。
我發現我解題目時遇到沒把握的都會用暴力解，但這樣容易TLE且沒效率，因為我都是有甚麼想法就直接寫，這點不太知道如何修正，
## 【從中學到的】
尺取法是當`sum>=S`時用已知的總和`sum`減掉`v[L]`，能避免我一開始每個子集都要從頭算的問題