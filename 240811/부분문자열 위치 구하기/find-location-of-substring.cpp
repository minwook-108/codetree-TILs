#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a;
    cin >> b;
    if(a.find(b)!=string::npos){
        cout << a.find(b);
    }
    else{
        cout << -1;
    }
    return 0;
}