#include <iostream>
using namespace std;

bool Check(int i){
    for(int k=2;k<i;k++){
        if(i%k==0){
            return false;
        }
    }
    return true;
}
int Count(int a, int b){
    int sum=0;
    for(int i=a;i<=b;i++){
        if(Check(i)){
            sum+=i;
        }
    }
    return sum;
}
int main() {
    int a,b;
    cin >> a >> b;
    cout << Count(a,b);
    return 0;
}