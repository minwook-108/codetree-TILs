#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[10];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int min=arr[1]-arr[0];
    for(int i=n-1;i>=1;i--){
        int sum = arr[i]-arr[i-1];
        if(min > sum){
            min = sum;
        }
    }
    cout << min;
    return 0;
}