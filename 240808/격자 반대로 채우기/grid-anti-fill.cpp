#include <iostream>
using namespace std;

int main() {
    int arr[10][10]={};
    int n;
    cin >> n;
    int num=1, cnt=0;
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(cnt%2==0){
                arr[j][i] = num;
                num++;
            }
            else{
                arr[n-j-1][i] = num;
                num++;
            } 
        }
        cnt++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}