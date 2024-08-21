#include <iostream>
using namespace std;
void PrintStrar(int n){
    if(n==0){
        return;
    }
    for(int i=0;i<n;i++){
        cout << "* ";
    }
    cout << endl;
    PrintStrar(n-1);
    for(int i=0;i<n;i++){
        cout << "* ";
    }
    cout << endl;
}
int main() {
    int n;
    cin >> n;
    PrintStrar(n);
    return 0;
}