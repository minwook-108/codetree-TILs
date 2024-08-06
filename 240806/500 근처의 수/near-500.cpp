#include <iostream>
using namespace std;

int main() {
    int arr[10];
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }
    int max=1;
    int min=1000;
    for(int i=0;i<10;i++){
        if(max<arr[i] && arr[i]<500){
            max=arr[i];
        }
    }
    for(int i=0;i<10;i++){
        if(min > arr[i] && arr[i]>500){
            min=arr[i];
        }
    }
    cout << max << " " << min;
    return 0;
}