#include <iostream>
#include <string>
using namespace std;

int main() {
    string A,B,sum1="",sum2="";
    cin >> A;
    cin >> B;
    sum1=A+B;
    sum2=B+A;
    if(sum1 == sum2){
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;
}