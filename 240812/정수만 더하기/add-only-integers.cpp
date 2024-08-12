#include <iostream>
using namespace std;

int main() {
    string A;
    int sum=0;
    cin >> A;
    for(int i=0;i<A.length();i++){
        if(A[i]>='0' && A[i]<='9'){
            sum+=(int)(A[i]-48);
        }
    }
    cout << sum;
    return 0;
}