#include <iostream>
using namespace std;
void Print(int n,int m){
    int k;
    if(n>m){
        k=m;
    }
    else{
        k=n;
    }
    int result;
    for(int i=1;i<=n;i++){
        if(n%i==0 && m%i==0){
            result = i;
        }
    }
    cout << result;
}
int main() {
    int n,m;
    cin >> n >> m;
    Print(n,m);
    return 0;
}