#include <iostream>
using namespace std;
void Modify(int x[],int n){
    for(int i=0;i<n;i++){
        if(x[i]%2==0){
            x[i]/=2;
        }
    }
}
int main() {
    int N;
    int arr[50]={};
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    Modify(arr,N);
    for(int i=0;i<N;i++){
        cout << arr[i] << " ";
    }

    return 0;
}