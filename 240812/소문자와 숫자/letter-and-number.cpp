#include <iostream>
using namespace std;

int main() {
    string a,b="";
    cin >> a;
    for(int i=0;i<a.length();i++){
        if(a[i]>='A' && a[i]<='Z'){
            b+=(char)(a[i]+32);
        }
        else if(a[i]>='a' && a[i]<='z'){
            b+=a[i];
        }
        else if(a[i]>='0' && a[i]<='9'){
            b+=a[i];
        }
    }
    cout << b;
    return 0;
}