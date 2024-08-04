#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];
    int countarr[10]={};
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        countarr[arr[i]]++;
    }
    for(int i=1;i<=9;i++){
        cout << countarr[i] << endl;
    }

    return 0;
}