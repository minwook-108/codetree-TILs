#include <iostream>
#include <string>
using namespace std;

int main() {
    string s,sum="";
    for(int i=0;i<2;i++){
        cin >> s;
        sum+=s;
    }
    cout << sum.length();
    return 0;
}