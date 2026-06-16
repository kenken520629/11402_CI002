**動態陣列 (Dynamic Array) 運作原理與邏輯**
=====================================

### 運作原理

動態陣列是一種可以自動調整尺寸的陣列資料結構。當我們對陣列的元素進行插入或刪除時，該陣列的尺寸會自動調整以容納新的元素。

在 C++ 語言中，動態陣列是通過 `new` 運算符來實現的，例如：
```cpp
int* arr = new int[10];
```
這會創造一個大小為 10 的整數陣列 `arr`。

### 運算原理

在給定的程式碼中，我們看到了一個動態陣列 `grid`，其大小被設為 `m` x `n`。當 `m` 或 `n` 的值改變時，`grid` 的大小也會改變。

程式碼中的循環結構會遍歷 `grid` 的每個元素，並根據兩個元素的 `min` 值進行相加。在第 i 行的第 j 列中，元素的值會是第 i 行的第 j-1 個元素和第 i-1 個元素的 `min` 值加上元素本身。

### 這個邏輯適用於什麼情境？

這種動態陣列的運作原理和邏輯尤其適合於需要動態調整尺寸的資料結構，在計算機科學或數學等領域會常見出現。

例如，在計算最佳路線或最短路徑時，我們可能需要建立一個動態陣列來儲存已知的路徑或距離值。當我們找到一個新的路徑或距離時，我們可以動態地將它加到動態陣列中，並調整資料結構的尺寸以容納新的元素。

### 參考程式碼

```cpp
for(int i=1; i<m; ++i){
    for(int j=1; j<n; ++j){
        grid[i][j]+=min(grid[i][j-1],grid[i-1][j]);
        cout << grid[i][j] << " ";
    }
    cout << endl;
}
```
如果grid設定為唯讀時，可以建立一個滾動陣列dp:
```cpp
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int> dp;
        dp.push_back(grid[0][0]);
        for(int i=1; i<n; ++i){
            grid[0][i]+=grid[0][i-1];
            dp.push_back(grid[0][i]);
        }
        for(int i=1; i<m; ++i){
            dp[0]+=grid[i][0];
            cout << dp[0] << " ";
            for(int j=1; j<n; ++j){
                dp[j]=min(dp[j-1],dp[j])+grid[i][j];
                cout << dp[j] << " ";
            }
            cout << endl;
        }
        return dp[n-1];
    }
};
```