## 一開始
```cpp
class Solution {
public:
    int myAtoi(string s) {
        bool ckspa=true , cksign=true , isprint0=false;
        vector<char> v;
        string ss;
        int flag=0;
        if(s[0]==' ') ckspa=true;
        for(int i=0; i<s.size(); ++i){
            if(ckspa && cksign){
                if(s[i]==' ') continue;
                else if(s[i]=='+' || s[i]=='-' || isdigit(s[i])){
                    flag=i; 
                    cksign = false;
                }
                else break;
            }      
        }
        if(s[flag]=='+' || s[flag]=='-'){
            v.push_back(s[flag]);
            flag++;
        }    
        for(int i=flag; i<s.size(); ++i){
            if(isdigit(s[i])){
                v.push_back(s[i]);
                isprint0=true;
            }
            else break;
        }
        for(int i=1; i<v.size(); ++i){
            ss[i]=v[i];
        }
        int ans=stoi(ss);
        if(!isprint0)    
            return ans;
        else return 0;    
    }
};
```
## 解答
```cpp
class Solution {
public:
    int myAtoi(string s) {
        bool ckspa=true, cksign=true ,start=false;
        long long flag=0,ans=0,sign=1;

        for(int i=0; i<s.size(); ++i){
            if(ckspa && cksign){
                if(s[i]==' ') continue;
                else if(s[i]=='+' || s[i]=='-' || isdigit(s[i])){
                    if(s[i]=='-') sign=-1;
                    flag=(isdigit(s[i])) ? i : ++i; 
                    cksign = false;
                    start=true;
                    break;
                }
                else break;
            }      
        }
        if(!start) return 0;

        for(int i=flag; i<s.size(); ++i){
            if(isdigit(s[i])){
                ans=ans*10+s[i]-'0';
                if(ans*sign>=INT_MAX) return INT_MAX;
                if(ans*sign<=INT_MIN) return INT_MIN;
            }
            else break;
        }
        return ans*sign;
    }
};
```
## 【解題感想】
這題想了許久，把這題分成兩部分:  

1. 是在解決前導零和符號<Br>
2. 開始計算ans

起初是想用陣列轉整數，並用stoi函式，但是不只沒效率，使用stoi函式時也容易RE而且我也不會寫如何轉成整數的code<Br>
與AI溝通後，AI建議我用**long long ans來存答案**，並且**修改flag的賦值方式**，新增**start判別是否需要輸出0**
## 【學到的】
- 使用ans = ans*10 +s[i]-'0'來取代陣列或字串轉數字
- int上下限INT_MAX和INT_MIN的寫法
- 可以使用指標來依序判斷前導零和位數來優化
```cpp
// 1. 跳過空格 (取代你的 ckspa 邏輯)
        while (i < n && s[i] == ' ') i++;

        // 2. 處理符號
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++; // 跳過正負號，進入數字區
        }
```