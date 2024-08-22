#include <iostream>
using namespace std;
int Print(int n){
    if(n<10){
        return n*n;
    }
    return Print(n/10) + (n%10)*(n%10);
}
int main() {
    int N;
    cin >> N;
    cout << Print(N);
    return 0;
}