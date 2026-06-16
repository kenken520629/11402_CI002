# UVA 501 - Black Box
## 1. Problem Information

- **Platform:** UVa
- **Problem ID:** 501
- **Problem Title:** Black Box
- **Problem Link:** https://vjudge.net/problem/UVA-501
- **Source Code (Fail):** 
- **Source Code (Correct/Accepted):** [src/UVa501.cpp](./src/UVa501.cpp)

## 2. Problem Statement in My Own Words

- What is the input?
    - 第一行為測資數，隨後接著空白行，再來就是ADD陣列和GET陣列
- What is the expected output?
    - 當GET陣列的值等於ADD陣列的size，輸出ADD[i]，i為第i次GET陣列出現的次數
- What are the main rules or constraints?
    - 輸入測資數後要接空白行，-每個測資的答案都需隔一行
- What is the core task you must solve?
    - 需要判斷何時GET[i]會等於ADD的size、←如何有效率的插入ADD資料

## 3. Thinking Logic and Solution Strategy
如果每次插入都用sort會太慢，所以用auto迭代找位置並用insert插入，並建立兩個變數處理GET時需要的資料和index
### Initial Thoughts

- What was your first idea?
    - 用sort排序，並在ADD.size()變動時遍歷GET[i]
- What difficulty did you notice at the beginning?
    - 需要輸出時會有點難解決，因為很容易混淆

### Final Strategy

- What method did you finally use?
    - 用auto迭代找位置並用insert插入，並用額外增加的變數當GET的index和輸出的index
- Why does this method work?
    - auto有效減少時間複雜度，新增的變數能讓邏輯更明確
- What edge cases did you consider?
    - 當G[i]一樣時怎麼輸出A[i] A[i+1] A[i+2]...

## 4. Pseudocode

Write the main steps of your solution before showing the actual code.

```text
START
1. 輸入input
2. 插入ADD[i]
3. 檢查是否等於GET[i]
4. 如果等於則輸出，並用while解決G[i]一樣時的用題
END
```

## 5. Fail Code vs Correct Code


### Fail Code

```cpp
// Paste the incorrect, incomplete, or rejected version here.
```

**Why it failed:**

- 
- 

### Correct Code

```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int testcase , addnum , getnum;
    cin >> testcase;
    string s;
    getline(cin , s);
    getline(cin , s);
    while(testcase--){
        cin >> addnum >> getnum;
        vector<int> tempA(addnum);
        vector<int> A;
        vector<int> G(getnum);
        for(int i=0; i<addnum; ++i) cin >> tempA[i];
        for(int i=0; i<getnum; ++i) cin >> G[i];
        
        int t=0,g_ptr=0;
        for(int i=0; i<addnum; ++i){
            auto it = lower_bound(A.begin(),A.end(),tempA[i]);
            A.insert(it,tempA[i]);
            while(g_ptr<G.size() && G[g_ptr]==A.size()){
                cout << A[t] << endl;
                g_ptr++;
                t++;
            }                                                                                                                                                                                             ;
        }
        if(testcase!=0) cout << endl;
    }
    return 0;
}
```

**Why it works:**

- 
-

## 6. Difference and Reflection

### Key Differences

| Item | Fail Code | Correct Code |
|---|---|---|
| Logic |  |  |
| Edge Cases |  |  |
| Output Handling |  |  |
| Other |  |  |

### Reflection

- What mistake did you make?
    - G[i]值同樣時沒有用while
- What did you learn from debugging this problem?
- If you solve a similar problem again, what will you do better?