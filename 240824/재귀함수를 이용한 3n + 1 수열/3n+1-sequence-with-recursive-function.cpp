#include <iostream>
using namespace std;
int Print(int n){
    if(n==1){
        return 0;
    }
    if(n%2==0){
        return Print(n/2)+1;
    }
    else{
        return Print(n*3 + 1) + 1;
    }
}
int main() {
    int n;
    cin >> n;
    cout << Print(n);
    return 0;
}