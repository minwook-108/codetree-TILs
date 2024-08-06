#include <iostream>
using namespace std;

int main() {
    int N,e;
    int arr[1000]={};
    cin >> N;
    int max=1;
    for(int i=0;i<N;i++){
        cin >> e;
        arr[e]++;
        if(max<e){
            max=e;
        }
    }
    int amax=-1;
    for(int i=1;i<=max;i++){
        if(arr[i]>1){
            continue;
        }
        else if(arr[i]==1){
            if(amax<i){
                amax=i;
            }
        }
    }
    cout << amax;
    return 0;
}