#include <iostream>
using namespace std;

int main() {
    string a;
    for(int i=0;i<10;i++){
        cin >> a;
        if(a=="END"){
            break;
        }
        for(int i=0;i<a.length()/2;i++){
            char b = a[i];
            a[i]=a[a.length()-1-i];
            a[a.length()-1-i]=b;
        }
        cout << a << endl;
    }
    return 0;
}