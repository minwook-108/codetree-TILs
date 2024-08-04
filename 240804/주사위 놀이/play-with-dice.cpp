#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int countarr[7]={};
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }
    for(int i=0;i<10;i++){
        countarr[arr[i]]++;
    }
    for(int i=1;i<=6;i++){
        cout << i << " - " << countarr[i] << endl;
    }
    return 0;
}