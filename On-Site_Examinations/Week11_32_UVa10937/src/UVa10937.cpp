using namespace std;
int main(){
    int n;
    while(cin >> n){
        if(n==0) break;
        queue<int> q;
        vector<int> v;
        for(int i=0; i<n; ++i){
            q.push(i+1);
        }
        while(q.size()>=2){
            v.push_back(q.front());
            q.pop();
            int t=q.front();
            q.pop();
            q.push(t);
        }
        cout << "Discarded cards:";
        if(v.size()!=0) cout << " ";
        for(int i=0; i<v.size(); ++i){
            cout << v[i];
            if(i!=v.size()-1) cout << ", ";
        }
        cout << endl;
        cout << "Remaining card: " << q.front() << endl;
    }
    return 0;
}