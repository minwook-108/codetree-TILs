#include <iostream>
#include <algorithm>

using namespace std;

int N;
int A[100], B[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    // Please write your code here.
    int best=0;
    for(int i=0;i<N;i++){
        int counting[1000]={};
        for(int j=0;j<N;j++){
            if(i==j){
                continue;
            }
            int max_time = 0;
            int x=A[j], y=B[j];
            for(int k=x;k<y;k++){
                counting[k]++;
            }
            for(int k=0;k<1000;k++){
                if(counting[k]>0){
                    max_time++;
                }
            }
            best = max(best,max_time);
        }
    }
    cout << best;
    return 0;
}