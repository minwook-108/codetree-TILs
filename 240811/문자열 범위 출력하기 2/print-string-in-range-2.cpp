#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    int n;
    cin >> a;
    cin >> n;
    for(int i=a.length()-1;i>=a.length()-n;i--){
        cout << a[i];
    }
    return 0;
}