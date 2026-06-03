#include <iostream>

using namespace std;

int N;
int arr[20][20];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) cin >> arr[i][j];

    // Please write your code here.
    int Max_Count = 0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(N<6){
                for(int k=i+1;k<N;k++){
                    for(int l=0;l<N-2;l++){
                        if(Max_Count<arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[k][l]+arr[k][l+1]+arr[k][l+2]){
                            Max_Count = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[k][l]+arr[k][l+1]+arr[k][l+2];
                        }
                    }
                }

            }
            else{  
                for(int k=i;k<N;k++){
                    if(k==i){
                        for(int l=j+3;l<N-2;l++){
                            if(Max_Count<arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[k][l]+arr[k][l+1]+arr[k][l+2]){
                                Max_Count = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[k][l]+arr[k][l+1]+arr[k][l+2];

                            }
                        }

                    }
                    else{               
                        for(int l=0;l<N-2;l++){
                            if(Max_Count<arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[k][l]+arr[k][l+1]+arr[k][l+2]){
                                Max_Count = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[k][l]+arr[k][l+1]+arr[k][l+2];

                            }
                        }
                    }
                }
            }
        }
    }
    cout << Max_Count;
    return 0;
}