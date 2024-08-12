#include <iostream>
using namespace std;

int main() {
    int n;
    string A,q;
    cin >> n >> A;
    int cnt=0;
    for(int i=0;i<n;i++){
        cin >> q;
        if(A==q){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}