#include <iostream>
using namespace std;

int main() {
    int a,b, temp;
    int countarr[9]={};
    cin >> a >> b;
    for(int i=0;i<100;i++){
        temp = a%b;
        a/=b;
        countarr[temp]++;
        if(a<=1){
            break;
        }
    }
    int sum=0;
    for(int i=0;i<=9;i++){
        int c=countarr[i];
        c*=c;
        sum+=c;
    }
    cout << sum;
    return 0;
}