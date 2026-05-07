#include <bits/stdc++.h>
using namespace std;

string s, target;
// 宣告一個遞迴函數
// s_idx: 目前來源字串處理到哪了
// t_idx: 目前目標字串匹配到哪了
// path: 目前累積的 "i" 和 "o" 步驟
// st: 屬於這個平行時空的獨立堆疊 (傳值呼叫，所以每個時空的堆疊互不干擾)
void dfs(int s_idx, int t_idx, string path, stack<char> st) {
    
    // 【終止條件】
    // 如果目標字串全部匹配完了，代表這條路線成功！印出結果。
    if (t_idx == target.length()) {
        cout << path << endl;
        return; 
    }

    // 【分支一：嘗試 Push (i)】
    // 只要來源字串還有字母，我就可以選擇 Push
    if (s_idx < s.length()) {
        stack<char> next_st = st; // 複製一份目前的堆疊
        next_st.push(s[s_idx]);   // 執行動作
        
        string next_path = path + (path.empty() ? "i" : " i"); // 加上步驟
        
        // 進入平行時空往下找
        dfs(s_idx + 1, t_idx, next_path, next_st); 
    }

    // 【分支二：嘗試 Pop (o)】
    // 條件：堆疊不能是空的，且頂端字母剛好等於我們現在需要的 target 字母
    if (!st.empty() && st.top() == target[t_idx]) {
        stack<char> next_st = st; // 複製一份目前的堆疊
        next_st.pop();            // 執行動作 (拿出來)
        
        string next_path = path + " o"; // 加上步驟
        
        // 進入平行時空往下找
        dfs(s_idx, t_idx + 1, next_path, next_st);
    }
}

int main(){
    while(cin >> s >> target){
        cout << "[" << endl;
        
        // 只有長度一樣才有可能變成 Anagrams，否則直接跳過
        if(s.length() == target.length()){
            stack<char> initial_st;
            dfs(0, 0, "", initial_st); // 從雙方索引 0、空字串、空堆疊開始展開宇宙
        }
        
        cout << "]" << endl;
    }
    return 0;
}