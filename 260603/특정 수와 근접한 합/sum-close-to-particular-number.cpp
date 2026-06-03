#include <iostream>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;

int N, S;
int arr[100];

int main() {
    cin >> N >> S;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int Min_Result = INT_MAX;
    int sum =0;
    for(int i=0;i<N;i++){
        sum+=arr[i];
    }

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(Min_Result>abs((sum-arr[i]-arr[j])-S)){
                Min_Result=abs((sum-arr[i]-arr[j])-S);
            }
        }
    }
    cout << Min_Result;

    return 0;
}