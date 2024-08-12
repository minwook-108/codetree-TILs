#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b,ra="",rb="";
    cin >> a;
    cin >> b;
    for(int i=0;i<a.length();i++){
        if(a[i]>='0' && a[i]<='9'){
            ra+=a[i];
        }
    }
    for(int i=0;i<b.length();i++){
        if(b[i]>='0' && b[i]<='9'){
            rb+=b[i];
        }
    }
    cout << stoi(ra)+stoi(rb);
    return 0;
}