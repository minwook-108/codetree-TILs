#include <iostream>

using namespace std;

int n;
int grid[100][100];

bool InRange(int x,int y){
    return (0<=x && x<n && 0<=y && y<n);
}

int dx[4]={0,-1,0,1}, dy[4]={-1,0,1,0};
int dir_num = 0;

int main() {
    cin >> n;
    int answer[n][n]={};
    // Please write your code here.
    int x=n-1,y=n-1;
    answer[x][y]=n*n;
    for(int i=n*n-1;i>0;i--){
        int nx=x+dx[dir_num],ny=y+dy[dir_num];
        if(!InRange(nx,ny) || answer[nx][ny]!=0){
            dir_num=(dir_num+1)%4;
        }
        x+=dx[dir_num], y+=dy[dir_num];
        answer[x][y]=i;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
