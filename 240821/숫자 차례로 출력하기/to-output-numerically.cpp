#include <iostream>
using namespace std;
void Print(int n){
    for(int i=1;i<=n;i++){
        cout << i << " ";
    }
    cout << endl;
}
void ReversePrint(int n){
    for(int i=n;i>=1;i--){
        cout << i << " ";
    }
}
int main() {
    int N;
    cin >> N;
    Print(N);
    ReversePrint(N);
    return 0;
}