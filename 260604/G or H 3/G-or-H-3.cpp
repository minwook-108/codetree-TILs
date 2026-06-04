#include <iostream>

using namespace std;

int N, K;
int x[100];
char c[100];
int score[10001];
int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> c[i];
        if(c[i]=='G'){
            score[x[i]]=1;
        }
        else if(c[i]=='H'){
            score[x[i]]=2;
        }
    }

    // Please write your code here.
    int Max_score = 0;
    for(int i=1;i<=10000-K+1;i++){
        int sum=0;
        for(int j=i;j<=i+K;j++){
            sum+=score[j];
        }
        Max_score = max(Max_score,sum);
    }
    cout << Max_score;

    return 0;
}