#include <iostream>
using namespace std;
int FindMax(int a[],int n, int max){
    if(n==0){
        return max;
    }
    if(a[n-1]>max){
        return FindMax(a,n-1,a[n-1]);
    }
    return FindMax(a,n-1,max);

}
int main() {
    int n;
    int arr[100];
    int max=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << FindMax(arr,n,max);

    return 0;
}