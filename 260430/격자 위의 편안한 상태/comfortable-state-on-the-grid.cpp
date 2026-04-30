#include <iostream>

using namespace std;

int N, M;
int r[10000], c[10000];

bool InRange(int x, int y){
    return (0<=x && x<N && 0<=y && y<N);
}

int dx[4] = {0,1,0,-1}, dy[4]={1,0,-1,0};

int main() {
    cin >> N >> M;

    int answer[N][N]={};
    int dir = 0;
    for (int i = 0; i < M; i++) {
        cin >> r[i] >> c[i];
        answer[r[i]-1][c[i]-1]=1;
        int cnt=0;
        for(int j=0;j<4;j++){
            int x=r[i]-1+dx[j], y=c[i]-1+dy[j];     
            if(InRange(x,y)!=false && answer[x][y]==1){
                cnt++;
            }
        }
        if(cnt==3){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }

    // Please write your code here.
    return 0;
}