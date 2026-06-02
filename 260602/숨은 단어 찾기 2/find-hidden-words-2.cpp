#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int N, M;
string arr[50];

int Dir_Num = 8;
int dx[8]={0,1,1,1,0,-1,-1,-1},dy[8]={1,1,0,-1,-1,-1,0,1};

bool InRange(int x,int y){
    return (0<=x && x<N && 0<=y && y<M);
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int cnt=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            for(int k=0;k<Dir_Num;k++){
                int curt = 0;
                int curx = i;
                int cury = j;
                string name = "";
                name+=arr[i][j];
                int c = 2;
                while(c--){
                    int nx = curx + dx[k];
                    int ny = cury + dy[k];
                    if(InRange(nx,ny)==false){
                        break;
                    }
                    curt++;
                    curx = nx;
                    cury = ny;
                    name+=arr[curx][cury];
                    if(name == "LEE"){
                        cnt++;
                        break;
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}