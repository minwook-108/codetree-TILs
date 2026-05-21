#include <iostream>
#include <string>

using namespace std;

int N, T;
string str;
int board[100][100];

int dir_num = 3;

int dx[4]={0,1,0,-1}, dy[4]={1,0,-1,0};

bool InRange(int x,int y){
    return (0<=x && x<N && 0<=y && y<N);
}


int main() {
    cin >> N >> T;
    cin >> str;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
        }
    }

    // Please write your code here.
    int x=N/2, y=N/2;
    int sum=board[x][y];
    for(int i=0;i<str.length();i++){
        if(str[i]=='R'){
            dir_num= (dir_num+1)%4;
        }
        else if(str[i]=='L'){
            dir_num=(dir_num+3)%4;
        }
        else{
            int nx=x+dx[dir_num],ny=y+dy[dir_num];
            if(!InRange(nx,ny)){
                continue;
            }
            else{
                x=x+dx[dir_num],y=y+dy[dir_num];
                sum+=board[x][y];
            }
        }
    }
    cout << sum;

    return 0;
}