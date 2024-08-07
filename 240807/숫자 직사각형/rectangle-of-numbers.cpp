#include <iostream>
using namespace std;

int main() {
    int n,m;
    int arr2d[100][100]={};
    cin >> n >> m;
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr2d[i][j] = num;
            num++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr2d[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}