#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[10];
    char a;
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }
    cin >> a;
    bool c = false;
    for(int i=0;i<10;i++){
        if(arr[i][arr[i].length()-1]==a){
            cout << arr[i] << endl;
            c = true;
        }
    }
    if(c==false){
        cout << "None";
    }
    return 0;
}