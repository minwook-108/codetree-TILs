#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b="";
    cin >> a;
    int cnt=1;
    for(int i=0;i<a.length();i++){
        if(a[i]==a[i+1]){
            cnt++;
        }
        else{
            b+=a[i];
            b+=to_string(cnt);
            cnt=1;
        }
    }
    cout << b.length() << endl << b;
    return 0;
}