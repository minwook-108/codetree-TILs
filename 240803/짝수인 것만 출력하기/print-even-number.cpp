#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int arr1[100];
    int n, cnt=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0 && arr[i]!=0){
            arr1[cnt]=arr[i];
            cnt++;
        }
    }
    for(int i=0;i<cnt;i++){
        cout << arr1[i] << " ";
    }
    return 0;
}