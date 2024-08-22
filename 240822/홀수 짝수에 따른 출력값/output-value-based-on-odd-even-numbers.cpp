#include <iostream>
using namespace std;
int Print(int n){
    if(n==2){
        return 2;
    }
    else if(n==1){
        return 1;
    }
    if(n%2==0){
        return Print(n-2) + n;
    }
    else{
        return Print(n-2) + n;
    }
}
int main() {
    int N;
    cin >> N;
    cout << Print(N);
    return 0;
}