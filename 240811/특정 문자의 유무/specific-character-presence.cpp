#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    if(a.find("ee")!= string::npos){
        cout << "Yes" << " ";
    }
    else{
        cout << "No" << " ";
    }
    if(a.find("ab")!=string::npos){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}