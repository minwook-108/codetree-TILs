#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, sum="";
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        sum+=a;
    }
    cout << sum;
    return 0;
}