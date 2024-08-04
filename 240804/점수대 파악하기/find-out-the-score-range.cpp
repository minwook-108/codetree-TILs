#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int countarr[11]={};
    int cnt=0;
    for(int i=0;i<100;i++){
        cin >> arr[i];
        if(arr[i]==0){
            break;
        }
        cnt++;
        arr[i]/=10;
    }
    for(int i=0;i<cnt;i++){
        countarr[arr[i]]++;
    }
    for(int i=10;i>=1;i--){
        cout << i*10 << " - " << countarr[i] << endl;
    }
    return 0;
}