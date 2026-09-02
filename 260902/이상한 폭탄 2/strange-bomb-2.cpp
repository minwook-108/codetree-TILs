#include <iostream>
#include <cmath>
using namespace std;

int N, K;
int num[100];

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }

    // Please write your code here.
    int count = 0;
    bool chk = true;
    int arr[100]={};
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j){
                continue;
            }

            if(num[i]==num[j]&&arr[i]==0){
                if(abs(i-j)<=K){
                    if(count<num[i]){
                        count = num[i];
                    }
                    chk = false;
                    arr[i]=1;
                }
            }
        }
    }
    if(chk==true){
        cout << -1;
    }
    else{
        cout << count;
    }
    return 0;
}