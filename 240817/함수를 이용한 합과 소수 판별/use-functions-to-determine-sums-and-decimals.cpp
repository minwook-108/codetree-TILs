#include <iostream>
using namespace std;
int Count(int a,int b){
    int cnt=0;
    for(int i=a;i<=b;i++){
        if(((i%10)+(i/10))%2==0){
            bool s = true;
            for(int j=2;j<i;j++){
                if(i%j==0){
                    s = false;
                    break;
                }
            }
            if(s==true){
                cnt++;
            }
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