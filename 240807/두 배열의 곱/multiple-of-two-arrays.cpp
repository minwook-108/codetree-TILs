#include <iostream>
using namespace std;

int main() {
    int arr2d[3][3]={}, arr2d1[3][3]={};
    int result[3][3]={};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> arr2d[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> arr2d1[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            result[i][j] = arr2d1[i][j] * arr2d[i][j];
            cout << result[i][j] << " "; 
        }
        cout << endl;
    }
    return 0;
}