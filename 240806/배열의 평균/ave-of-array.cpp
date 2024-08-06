#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    cout.precision(1);
    double arr[2][4];
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<2;i++){
        double sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        cout << sum/4 << " ";
    }
    cout << endl;
    for(int i=0;i<4;i++){
        double sum=0;
        for(int j=0;j<2;j++){
            sum+=arr[j][i];
        }
        cout << sum/2 << " ";
    }
    cout << endl;
    double sum=0;
    for(int i=0;i<2;i++){     
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
    }
    cout << sum/8;
    return 0;
}