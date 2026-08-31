#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int N;
int x[100];
int y[100];


int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    int max_value = 0;
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            for(int k=j+1;k<N;k++){
                if((x[i]!=x[j]&&x[j]!=x[k]&&x[i]!=x[k])||(y[i]!=y[j]&&y[j]!=y[k]&&y[i]!=y[k])){
                    continue;
                }

                int value = abs((x[i]*y[j]+x[j]*y[k]+x[k]*y[i])-(x[j]*y[i]+x[k]*y[j]+x[i]*y[k]));
                max_value = max(max_value,value);
            }
        }
    }

    cout << max_value;

    return 0;
}