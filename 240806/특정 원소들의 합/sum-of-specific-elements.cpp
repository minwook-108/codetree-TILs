#include <iostream>
using namespace std;

int main() {
    int arr[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<4;i++){
        for(int j=i;j<4;j++){
            sum+=arr[j][i];
        }
    }
    cout << sum;
    return 0;
}