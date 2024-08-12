#include <iostream>
#include <string>
using namespace std;

int main() {
    string A,B,a="",b="";
    cin >> A >> B;
    for(int i=0;i<A.length();i++){
        if(A[i]>='0' && A[i]<='9'){
            a+=A[i];
        }
        else{
            break;
        }
    }
    for(int i=0;i<B.length();i++){
        if(B[i]>='0' && B[i]<='9'){
            b+=B[i];
        }
        else{
            break;
        }
    }
    int a1=stoi(a),b1=stoi(b);
    cout << a1+b1;
    return 0;
}