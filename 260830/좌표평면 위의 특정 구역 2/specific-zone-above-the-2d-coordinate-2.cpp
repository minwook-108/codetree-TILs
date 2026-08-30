#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <climits>
using namespace std;

int N;
int x[100], y[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    int result, best=INT_MAX;
    

    for(int k=0;k<N;k++){
        int x_max=0,x_min=40001,y_max=0,y_min=40001;
        for(int i=0;i<N;i++){
            if(i==k){
                continue;
            }
            x_max = max(x_max,x[i]);
            x_min = min(x_min,x[i]);
            y_max = max(y_max,y[i]);
            y_min = min(y_min,y[i]);
        }
        result = (x_max-x_min)*(y_max-y_min);
        best = min(best,result);
    }
    cout << best;

    return 0;
}