#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int T, a, b;
char c[100];
int x[100];

int main() {
    cin >> T >> a >> b;

    for (int i = 0; i < T; i++) {
        cin >> c[i] >> x[i];
    }

    // Please write your code here.
    int count=0;
    for(int i=a;i<=b;i++){
        int d1,d2;
        int d1_min=1000,d2_min=1000;
        for(int j=0;j<T;j++){
            if(c[j]=='S'){
                d1=abs(x[j]-i);
                d1_min=min(d1_min,d1);
            }
            else{
                d2=abs(x[j]-i);
                d2_min=min(d2_min,d2);
            }
        }

        if(d2_min>=d1_min){
            count++;
        }
    }

    cout << count;

    return 0;
}