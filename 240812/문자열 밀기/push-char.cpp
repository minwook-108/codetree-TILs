#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    int len = a.length();
    a = a.substr(1,len-1) + a[0];
    cout << a;
    return 0;
}