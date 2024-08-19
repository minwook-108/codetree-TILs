#include <iostream>
#include <string>
using namespace std;
bool CheckPalindrome(string &a){
    for(int i=0;i<a.length()/2;i++){
        if(a[i]!=a[a.length()-1-i]){
            return false;
        }
    }
    return true;
}
int main() {
    string A;
    cin >> A;
    if(CheckPalindrome(A)==true){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}