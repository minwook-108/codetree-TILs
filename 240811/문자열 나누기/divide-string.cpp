#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string arr[10];
    string sum="";
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    int cnt=0;
    for(int i=0;i<sum.length();i++){
        cout << sum[i];
        ++cnt;
        if(cnt%5==0){
            cout << endl;
        }
    }
    
    return 0;
}