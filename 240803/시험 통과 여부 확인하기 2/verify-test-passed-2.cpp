#include <iostream>
using namespace std;

int main() {
    int n, cnt=0;
    int arr[4];
    cin >> n;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int k=0;k<4;k++){
            cin >> arr[i];
            sum+=arr[i];    
        }
        sum/=4;
        if(sum >=60){
            cout << "pass" << endl;
            cnt++;
        }
        else{
            cout << "fail" << endl;
        }
        
    }
    cout << cnt;
    return 0;
}