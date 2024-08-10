#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[5]={"apple", "banana", "grape", "blueberry", "orange"};
    char a;
    cin >> a;
    int cnt=0;
    for(int i=0;i<5;i++){
        for(int j=2;j<=3;j++){
            if(a == arr[i][j]){
                cout << arr[i] << endl;
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}