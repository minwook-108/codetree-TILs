#include <iostream>

using namespace std;

int N, K;
int candy[100], pos[100];

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> candy[i] >> pos[i];
    }

    // Please write your code here.
    int Max_sum=0;
    for(int i=0;i<=100;i++){
        int sum = 0;
        for(int j=i-K;j<=i+K;j++){
            for(int k=0;k<N;k++){
                if(pos[k]==j){
                    sum+=candy[k];
                }
            }
            
        }
        if(Max_sum<sum){
            Max_sum=sum;
        }
    }
    cout << Max_sum;

    return 0;
}