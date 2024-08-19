#include <iostream>
using namespace std;
void Check(int &a, int &b){
    if(a>b){
        b*=2;
        a+=25;
    }
    else{
        a*=2;
        b+=25;
    }
}
int main() {
    int a,b;
    cin >> a >> b;
    Check(a,b);
    cout << a << " " << b;
    return 0;
}