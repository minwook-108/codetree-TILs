#include <iostream>
using namespace std;

int main() {
    string a,result="";
    cin >> a;
    for(int i=0;i<a.length();i++){
        if(a[i]>='A'&& a[i]<='Z'){
            result+=a[i];
        }
        else if(a[i]>='a'&& a[i]<='z'){
            result+=(char)(a[i]-32);
        }
    }
    cout << result;
    return 0;
}