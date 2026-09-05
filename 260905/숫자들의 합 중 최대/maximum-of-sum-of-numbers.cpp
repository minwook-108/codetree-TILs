#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int X, Y;

int main() {
    cin >> X >> Y;

    // Please write your code here.
    int max_sum=0;
    for(int j=X;j<=Y;j++){
        int sum=0;
        int k=j;
        for(int i=4;i>=0;i--){         
            int a = k/pow(10,i);
            sum+=a;
            k-=(a*pow(10,i));
        }
        max_sum=max(max_sum,sum); 
    }

    cout << max_sum;

    return 0;
}