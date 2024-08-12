#include <iostream>
using namespace std;

int main() {
    string A,B;
    cin >> A;
    cin >> B;
    int cnt=0;
    for(int i=0;i<A.length();i++){
        A = A[A.length()-1] + A.substr(0,A.length()-1);
        cnt++;
        if(A==B){
            break;
        }
    }
    if(cnt==A.length()){
        cout << -1;
    }
    else{
        cout << cnt;
    }
    return 0;
}