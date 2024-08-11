#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    int k = a.length();
    if(k%2==1){
        k-=1;
    }
    for(int i=k-1;i>=0;i-=2){
        cout << a[i];
    }
    return 0;
}