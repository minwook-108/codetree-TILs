#include <iostream>
#include <climits>
using namespace std;

int N, H, T;
int arr[100];

int main() {
    cin >> N >> H >> T;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int Min_num = INT_MAX;
    for(int i=0;i<=N-T;i++){
        int num=0;
        for(int j=i;j<i+T;j++){
            if(arr[j]>H){
                num+=(arr[j]-H);
            }
            else if(arr[j]<H){
                num+=(H-arr[j]);
            }
        }
        if(Min_num>num){
            Min_num=num;
        }
    }

    cout << Min_num;
    return 0;
}