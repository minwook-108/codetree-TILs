#include <iostream>
using namespace std;

int main() {
    int N;
    int arr[1000]={};
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    int idx=N;
    while(idx!=0){
        int max_idx=0;
        for(int i=1;i<idx;i++){
            if(arr[max_idx]<arr[i]){
                max_idx=i;
            }
        }
        cout << max_idx+1 << " ";
        idx=max_idx;
    }
    return 0;
}