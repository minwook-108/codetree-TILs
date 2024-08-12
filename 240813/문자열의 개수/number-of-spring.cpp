#include <iostream>
using namespace std;

int main() {
    string arr[200];
    string a;
    int cnt=0;
    for(int i=0;i<200;i++){
        cin >> arr[i];
        if(arr[i]=="0"){
            break;
        }
        cnt++;
    }
    cout << cnt << endl;
    for(int i=0;i<cnt;i+=2){
        cout << arr[i] << endl;
    }
    return 0;
}