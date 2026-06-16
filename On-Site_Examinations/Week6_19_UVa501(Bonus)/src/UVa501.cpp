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