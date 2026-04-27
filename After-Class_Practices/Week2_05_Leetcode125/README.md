這題因為之前有做過類似題目，所以相較起來較輕鬆，但是其實還有更好的做法<Br>
就是用雙指標left和right，可以省下空間複雜度
```cpp
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            // 1. 左指標往右走，直到遇到字母或數字
            while (left < right && !isalnum(s[left])) {
                left++;
            }
            // 2. 右指標往左走，直到遇到字母或數字
            while (left < right && !isalnum(s[right])) {
                right--;
            }

            // 3. 比對兩個字元（轉成小寫後比對）
            if (tolower(s[left]) != tolower(s[right])) {
                return false; // 只要有一對不起來，就不是迴文
            }

            // 4. 比對成功，繼續往中間縮小範圍
            left++;
            right--;
        }

        return true;
    }
};
```