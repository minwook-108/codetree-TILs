#include <iostream>
using namespace std;
int Min(int a, int b, int c){
    if(a>b && c>b){
        return b;
    }
    else if(b>a && c>a){
        return a;
    }
    else if(a>c && b>c){
        return c;
    }
}
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int result = Min(a,b,c);
    cout << result;
    return 0;
}