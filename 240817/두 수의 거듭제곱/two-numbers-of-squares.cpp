#include <iostream>
using namespace std;
int Result(int a,int b){
    int r=1;
    for(int i=0;i<b;i++){
        r*=a;
    }
    return r;
}
int main() {
    int a,b;
    cin >> a >> b;
    cout << Result(a,b);
    return 0;
}