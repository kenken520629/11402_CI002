class Solution {
public:
    int uniquePaths(int m, int n) {
        long long num=1 , dem=1;
        for(int i=max(m-1,n-1)+1; i<m+n-1; ++i){
            num*=i;
        }    
        for(int i=1; i<min(m,n); ++i){
            dem*=i;
        }
        cout << num << " " << dem << endl;  
        int t=num/dem;
        return t;
    }
};