#include <iostream>
#include <string>
using namespace std;
bool Check(string &a){
    for(int i=1;i<a.length();i++){
        if(a[i]!=a[i-1]){
            return true;
        }
    }
    return false;
}
int main() {
    string A;
    cin >> A;
    if(Check(A)==true){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}