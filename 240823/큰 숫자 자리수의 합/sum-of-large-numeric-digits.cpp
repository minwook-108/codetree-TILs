#include <iostream>
using namespace std;
int Mulit(int a[], int n){
    int sum=0;
    if(n==0){
        return 1;
    }
    return Mulit(a,n-1)*a[n-1];
}
int main() {
    int arr[3];
    int n=3;
    for(int i=0;i<3;i++){
        cin >> arr[i];
    }
    int result=Mulit(arr,n);
    int sum=0;
    while(result!=0){
        sum+=(result%10);
        result/=10;
    }
    cout << sum;
    return 0;
}