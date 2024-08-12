#include <iostream>
#include <string>
using namespace std;

int main() {
    string A,B;
    cin >> A >> B;
    string sum1=A+B,sum2=B+A;
    int s1=stoi(sum1),s2=stoi(sum2);
    cout << s1+s2;
    return 0;
}