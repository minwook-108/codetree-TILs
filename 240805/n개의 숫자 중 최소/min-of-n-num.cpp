#include <iostream>
using namespace std;

int main() {
    int N;
    int arr[100]={};
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    int min = arr[0];
    int cnt=0;
    for(int i=0;i<N;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    for(int i=0;i<N;i++){
        if(min==arr[i]){
            cnt++;
        }
    }
    cout << min << " " << cnt;
    return 0;
}