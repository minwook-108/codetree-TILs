#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string arr[10];
    int cnt=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i].length();
        if(arr[i][0]=='a'){
            cnt++;
        }
    }
    cout << sum << " " << cnt;
    return 0;
}