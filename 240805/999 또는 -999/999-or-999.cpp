#include <iostream>
using namespace std;

int main() {
    int arr[100]={};
    int max,min, cnt=0;
    for(int i=0;i<100;i++){
        cin >> arr[i];
        if(arr[i]==999 || arr[i]==-999){
            break;
        }
        cnt++;
    }
    max=arr[0];
    min=arr[0];
    for(int i=0;i<cnt;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout << max << " " << min;
    return 0;
}