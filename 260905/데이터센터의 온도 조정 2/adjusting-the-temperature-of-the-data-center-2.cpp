#include <iostream>
#include <algorithm>
using namespace std;

int N, C, G, H;
int Ta[1000], Tb[1000];

int GetWork(int i, int T){
    if(T<Ta[i]){
        return C;
    }
    else if(T>=Ta[i]&&T<=Tb[i]){
        return G;
    }
    else if(T>Tb[i]){
        return H;
    }
}

int main() {
    cin >> N >> C >> G >> H;

    for (int i = 0; i < N; i++) {
        cin >> Ta[i] >> Tb[i];
    }

    // Please write your code here.
    int Max_Work=0;
    for(int i=-1;i<=1001;i++){
        int sum=0;
        for(int j=0;j<N;j++){
            sum+=GetWork(j,i);
        }
        Max_Work=max(Max_Work,sum);
    }

    cout << Max_Work;

    return 0;
}