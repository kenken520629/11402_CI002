#include <bits/stdc++.h>
using namespace std;
int main(){
    int t , m , n , k , x , y;
    cin >> t;
    while(t--){
        cin >> n >> m >> k;
        cout << n << " "  << m << " " << k << endl;
        vector<vector<char>> v(n,vector<char>(m));
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                cin >> v[i][j];
            }
        }
        for(int i=0; i<k; ++i){
            cin >> x >> y;
            bool flag=true;
            int r=1;
            while(x+r<n && x-r>=0 && y+r<m && y-r>=0){
                for(int j=r; j>=-r; --j){
                    // cout << "j = " << j << endl;
                    if(v[x][y]!=v[x+j][y-1]) flag=false;//left
                    if(v[x][y]!=v[x+j][y+1]) flag=false;//right
                    if(v[x][y]!=v[x-1][y+j]) flag=false;//up
                    if(v[x][y]!=v[x+1][y+j]) flag=false;//down
                }
                if(!flag) break;
                r++;
            }
            cout << r*2-1 << endl;
        }
    }    
    return 0;
}