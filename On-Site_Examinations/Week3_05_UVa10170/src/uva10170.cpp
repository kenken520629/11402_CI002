#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long n, d, sum, t;
    while(cin >> n >> d){
        t = n;
        sum = n;
        while(sum < d){ // 這裡原圖是 <=，但為了邏輯正確改為 <
            if(sum == d){
                break;
            }
            else{
                t++;
                sum += t;
                // cout << "t: " << t << " " << endl;  // 原圖註解掉的 debug
                // cout << "sum: " << sum << " ";      // 原圖註解掉的 debug
            }
        }
        cout << t << endl;
    }
    return 0;
}