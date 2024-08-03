#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int cnt=-1;
    for(int i=0;i<10;i++){
        cin >> arr[i];
        cnt++;
        if(arr[i]==0){
            break;
        }
    }
    for(int i=cnt-1;i>=0;i--){
        cout << arr[i] << " ";
    }
    return 0;
}