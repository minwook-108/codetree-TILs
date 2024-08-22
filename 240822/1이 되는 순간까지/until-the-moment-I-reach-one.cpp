#include <iostream>
using namespace std;
int cnt=0;
int Print(int n){
    if(n==1){
        return cnt;
    }
    if(n%2==0){
        cnt++;
        return Print(n/2);
    }
    else{
        cnt++;
        return Print(n/3);
    }
}
int main() {
    int N;
    cin >> N;
    cout << Print(N);
    return 0;
}