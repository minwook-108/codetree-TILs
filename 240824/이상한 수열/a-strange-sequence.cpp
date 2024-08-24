#include <iostream>
using namespace std;
int Print(int n){
    if(n==1){
        return 1;
    }
    else if(n==2){
        return 2;
    }
    return Print(n/3)+Print(n-1);
}
int main() {
    int N;
    cin >> N;
    cout << Print(N);
    return 0;
}