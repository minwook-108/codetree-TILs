#include <iostream>
using namespace std;
void Rot(int x[], int n){
    for(int i=0;i<n;i++){
        if(x[i]<0){
            x[i] = -x[i];
        }
    }
}
int main() {
    int N;
    int arr[50];
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    Rot(arr, N);
    for(int i=0;i<N;i++){
        cout << arr[i] << " ";
    }
    return 0;
}