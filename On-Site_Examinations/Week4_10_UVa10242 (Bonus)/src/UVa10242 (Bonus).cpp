#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<double> x(4);
    vector<double> y(4);
    while(cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3]){
        double samepx=0;
        double samepy=0;
        for(int i=0; i<=3; ++i){
            for(int j=i+1; j<=3; ++j){
                if(x[i]==x[j] && y[i]==y[j]){
                    samepx=x[i];
                    samepy=y[i];
                }
            }
        }
        // cout << samepx << " " << samepy << endl;
        double midx=0,midy=0;
        for(int i=0; i<=3; ++i){
            if(x[i]!=samepx || y[i]!=samepy){
                midx+=x[i]/2;
                midy+=y[i]/2;
            }
        }
        int xx=1 ,yy=1;
        // cout << midx << " " << midy << endl;
        if(samepx>midx) xx=-1;
        else xx=1;
        if(samepy>midy) yy=-1;
        else yy=1;
        double gapx = abs(midx-samepx)*2*xx;
        double gapy = abs(midy-samepy)*2*yy;
        // cout << "gap " << gapx << " " << gapy << endl;
        cout << fixed << setprecision(3) << samepx+gapx << " " << samepy+gapy << endl;
    }


    return 0;
}