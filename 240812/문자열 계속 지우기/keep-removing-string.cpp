#include <iostream>
#include <string>
using namespace std;

int main() {
    string A,B;
    cin >> A;
    cin >> B;
    while(A.find(B)!=string::npos){
        A.erase(A.find(B),B.length());
    }
    cout << A;
    return 0;
}