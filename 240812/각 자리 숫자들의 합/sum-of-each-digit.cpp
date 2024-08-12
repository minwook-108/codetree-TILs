#include <iostream>
#include <string>
using namespace std;

int main() {
    int n,sum=0;
    cin >> n;
    string a = to_string(n);
    for(int i=0;i<a.length();i++){
        sum+=(int)(a[i]-48);
    }
    cout << sum;
    return 0;
}