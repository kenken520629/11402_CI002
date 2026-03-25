#include <iostream>
using namespace std;

int main()
{
    int n , m;
    cin >> n;
    while(n--){
        int a[51]={} , t = 0 , count = 0;
		cin >> m;
        for(int i = 0; i < m; ++i){
            cin >> a[i];
        }
		for(int i = 0; i < m-1; ++i){
			for(int j = 0; j < m-1; ++j){
				if(a[j] > a[j+1]){
					t = a[j];
					a[j] = a[j+1];
					a[j+1] = t;
					count++;
				}
			}
		}
		cout << "Optimal train swapping takes " << count << " swaps.\n";
    }
    return 0;
}