#include <iostream>
using namespace std;
int Count(int a, int b){
    int cnt=0;
    for(int i=a;i<=b;i++){
        if(i%2==0){
            continue;
        }
        else if(i%10==5){
            continue;
        }
        else if(i%3==0 && i%9!=0){
            continue;
        }
        else{
            cnt++;
        }
    }
    return cnt;
}
int main() {
    int a,b;
    cin >> a >> b;
    cout << Count(a,b);
    return 0;
}