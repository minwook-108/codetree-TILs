#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum1=0, sum2=0, cnt=0;
    for(int i=0;i<10;i++){
        cin >> arr[i];
        if(i%2==1){
            sum1+=arr[i];
        }
        if((i+1)%3==0){
            sum2+=arr[i];
            cnt++;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << sum1 << " " << (double)sum2/cnt;
    return 0;
}