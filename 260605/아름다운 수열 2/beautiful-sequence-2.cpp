#include <iostream>

using namespace std;

int N, M;
int A[100], B[100];
int arr[101]={};

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) cin >> A[i];

    for (int i = 0; i < M; i++){ 
        cin >> B[i];
        arr[B[i]]++;
    }
    // Please write your code here.
    int arr1[101]={};
    
    for(int i=0;i<101;i++){
        arr1[i]=arr[i];
    }

    int cnt=0;
    for(int i=0;i<=N-M;i++){
        for(int j=1;j<101;j++){
            arr1[j]=arr[j];
        }
        for(int k=0;k<M;k++){
            for(int l=0;l<M;l++){
                if(arr1[A[i+k]]>0 && A[i+k]==B[l]){
                    arr1[B[l]]--;
                    break;
                }
            }
        }
        int check = 0;
        for(int j=1;j<101;j++){
            check += arr1[j];
        }
        if(check==0){
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}