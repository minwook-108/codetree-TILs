#include <iostream>
using namespace std;
int Factorial(int n){
    if(n==1){
        return 1;
    }
    return Factorial(n-1)*n;
}
int main() {
    int N;
    cin >> N;
    cout << Factorial(N);
    return 0;
}