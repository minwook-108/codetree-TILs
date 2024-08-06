#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    int max=arr[0], idx=0;
    for(int i=0;i<N;i++){
        if(max<arr[i]){
            max=arr[i];
            idx=i;
        }
    }
    int temp;
    temp = arr[0];
    arr[0]=max;
    arr[idx]=temp;
    max=arr[1];
    for(int i=1;i<N;i++){
        if(max<arr[i]){
            max=arr[i];
            idx=i;
        }
    }
    cout << arr[0] << " " << max;
    return 0;
}