#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> Map;
    int n , m , k , Scenario=1;
    string s;
    while(cin >> n&& n!=0){
        for(int teamid=1; teamid<=n; ++teamid){
            cin >> m;
            for(int i=0; i<m; ++i){
                cin >> k;
                Map[k]=teamid;  
            }
        }
        int data;    
        queue<int> q[1005];
        queue<int> mainq;
        vector<int> v;
        while(cin >> s && s!="STOP"){
            if(s=="ENQUEUE"){
                cin >> data;
                int teamid=Map[data];
                if(q[teamid].empty()){
                    mainq.push(teamid);
                }
                q[teamid].push(data);
            }
            else{
                v.push_back(q[mainq.front()].front());
                q[mainq.front()].pop();
                if(q[mainq.front()].empty()) mainq.pop();
            }
        }   
        cout << "Scenario #" << Scenario++ << endl;
        for(int i=0; i<v.size(); ++i){
            cout << v[i] << endl;
        }
        cout << endl;
    }
    return 0;
}