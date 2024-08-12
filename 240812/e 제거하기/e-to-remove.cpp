#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    a.erase(a.find('e'),1);
    cout << a;
    return 0;
}