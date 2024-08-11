#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b,temp1="";
    cin >> a >> b;
    for(int i=0;i<2;i++){
        temp1+=a[i];
    }
    for(int i=0;i<2;i++){
        b[i]=temp1[i];
    }
    cout << b;
    return 0;
}