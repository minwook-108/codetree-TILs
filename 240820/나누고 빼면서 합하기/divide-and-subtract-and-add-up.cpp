#include <iostream>
using namespace std;
int Print(int arr[], int m){
    int sum=m;
    while(m!=1){
        if(m%2==0){
            m/=2;
        }
        else{
            m-=1;
        }
        sum+=arr[m];
    }
    return sum;
}
int main() {
    int n,m;
    int A[100];
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    cout << Print(A,m);
    return 0;
}