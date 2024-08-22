#include <iostream>
using namespace std;
int Print(int n){
    if(n==1){
        return 1;
    }
    return Print(n-1)+n;
}
int main() {
    int N;
    cin >> N;
    cout << Print(N);
    return 0;
}