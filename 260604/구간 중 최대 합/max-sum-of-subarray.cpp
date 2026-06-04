#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
int arr[100];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int Max_Value = 0;
    for(int i=0;i<=n-k;i++){
        int sum=0;
        for(int j=i;j<i+k;j++){
            sum+=arr[j];
        }
        Max_Value = max(Max_Value,sum);
    }

    cout << Max_Value;
    return 0;
}