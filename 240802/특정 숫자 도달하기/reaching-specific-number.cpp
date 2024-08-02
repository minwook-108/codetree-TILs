#include <iostream>
using namespace std;

int main() {
    int arr[10];
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }
    int sum=0;
    double avg;
    int cnt=0;
    for(int i=0;i<10;i++){
        if(arr[i]>=250){
            break;
        }
        sum+=arr[i];
        cnt++;
    }
    avg = (double)sum / cnt;
    cout << sum << " " << avg;
    return 0;
}