#include <iostream>
using namespace std;

int main() {
    int arr[10][10]={};
    int n,m,r,c;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> r >> c;
        arr[r][c]=i+1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}