#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[1000];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int sum=0;
    int max=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            sum=arr[j]-arr[i];
            if(sum>0 && sum>max){
                max=sum;
            }
        }
    }
    cout << max;
    return 0;
}