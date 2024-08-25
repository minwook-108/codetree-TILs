#include <iostream>
using namespace std;
int GCD(int a, int b){
    int max=0;
    if(a>b){
        for(int i=1;i<=b;i++){
            if(a%i==0 && b%i==0){
                max=i;
            }
        }
    }
    else{
        for(int i=1;i<=a;i++){
            if(b%i==0 && a%i==0){
                max=i;
            }
        }
    }
    return max;
}
int LCD(int a[],int n){
    if(n==1){
        return a[0];
    }
    if(n==2){
        return (a[n-1]*a[n-2])/GCD(a[n-1],a[n-2]);
    }
    int min = (a[n-1]*a[n-2])/GCD(a[n-1],a[n-2]);
    a[n-2] = min;
    return LCD(a,n-1);
}
int main() {
    int n, arr[10]={};
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << LCD(arr,n);
    return 0;
}