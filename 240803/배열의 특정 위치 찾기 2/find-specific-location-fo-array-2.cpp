#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum1=0, sum2=0, result;
    for(int i=0;i<10;i++){
        cin >> arr[i];
        if(i%2==0){
            sum1+=arr[i];
        }
        else{
            sum2+=arr[i];
        }
    }
    if(sum1>=sum2){
        result=sum1-sum2;
    }
    else{
        result=sum2-sum1;
    }
    cout << result;
    return 0;
}