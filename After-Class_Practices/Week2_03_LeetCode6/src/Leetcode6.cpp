class Solution {
public:
    string convert(string s, int numRows) {
        string ss;
        bool up=false;
        long long size=s.size(), res=0, N=numRows;
        cout << size << endl;
        if(N==1) return s;
        for(int i=0; i<N; ++i){
            res=i;
            up=false;
            while(res<size){
                if(i==0) up=false;
                if(i==N-1) up=true;
                if(up){
                    cout << res << endl;
                    ss.push_back(s[res]);
                    res=res+(i)*2;
                    up=false;
                }
                else{
                    cout << res << endl;
                    ss.push_back(s[res]);
                    res=res+(N-i-1)*2;
                    up=true;
                }   
            }
        }
        return ss;
    }
};