#include <iostream>
using namespace std;
int Print(int n){
    if(n==1){
        return 2;
    }
    else if(n==2){
        return 4;
    }
    return (Print(n-1)*Print(n-2))%100;
}
int main() {
    int N;
    cin >> N;
    cout << Print(N);
    return 0;
}