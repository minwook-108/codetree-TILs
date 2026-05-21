#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int n;
int A[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    int min_sum = 10000000;
    
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum = sum + A[j]*abs(i-j);
        }
        if(sum<min_sum){
            min_sum = sum;
        }
    }
    cout << min_sum;

    return 0;
}