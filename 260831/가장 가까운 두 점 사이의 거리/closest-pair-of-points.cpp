#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int n;
int x[100], y[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    int min_value = 2000001;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int distance = pow((x[i]-x[j]),2) + pow((y[i]-y[j]),2);
            min_value = min(min_value,distance);
        }
    }

    cout << min_value;

    return 0;
}