#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    int len = a.length();
    cout << a << endl;
    for(int i=0;i<len;i++){
        a = a.substr(len-1,1)+a.substr(0,len-1);
        cout << a << endl;
    }
    return 0;
}