#include <iostream>
using namespace std;

int main() {
    int n, idx=-1, cnt=0;
    cin >> n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]==2){
            cnt++;
            if(cnt==3){
                idx=i;
            }
        }
    }
    cout << idx+1;
    return 0;
}