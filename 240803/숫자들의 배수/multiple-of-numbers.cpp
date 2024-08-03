#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n, cnt=0;
    cin >> n;
    for(int i=1;i<=100;i++){
        arr[i-1] = n*i;
        cout << arr[i-1] << " ";
        if(arr[i-1]%5==0){
            cnt++;
        }
        if(cnt==2){break;}
    }
    return 0;
}