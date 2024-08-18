#include <iostream>
#include <string>
using namespace std;
bool Print(string a, string b){
    if(a.find(b)!=string::npos){
        return true;
    }
    else{
        return false;
    }
}
int main() {
    int n1,n2,n;
    string a="",b="";
    cin >> n1 >> n2;
    for(int i=0;i<n1;i++){
        cin >> n;
        a+=to_string(n);
    }
    for(int i=0;i<n2;i++){
        cin >> n;
        b+=to_string(n);
    }
    if(Print(a,b)==true){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}