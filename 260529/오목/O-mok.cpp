#include <iostream>

using namespace std;

int board[19][19];

int main() {
    for (int i = 0; i < 19; i++)
        for (int j = 0; j < 19; j++) cin >> board[i][j];

    // Please write your code here.
    int winner = 0;
    int x=1,y=1;
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<19;i++){
        for(int j=0;j<19;j++){
            cnt1=0;
            cnt2=0;
            for(int k=0;k<5;k++){
                if(board[i][j]==1 && board[i][j+k]==1){
                    cnt1++;
                }
                else if(board[i][j]==2 && board[i][j+k]==2){
                    cnt2++;
                }
                if(cnt1==5){
                    x=i+1,y=j+3;
                    winner=1;
                }
                else if(cnt2==5){
                    x=i+1,y=j+3;
                    winner=2;
                }
            }
        }
    }
    for(int i=0;i<19;i++){
        for(int j=0;j<19;j++){
            cnt1=0;
            cnt2=0;
            for(int k=0;k<5;k++){
                if(board[i][j]==1 && board[i+k][j]==1){
                    cnt1++;
                }
                else if(board[i][j]==2 && board[i+k][j]==2){
                    cnt2++;
                }
                if(cnt1==5){
                    x=i+3,y=j+1;
                    winner=1;
                }
                else if(cnt2==5){
                    x=i+3,y=j+1;
                    winner=2;
                }
            }
        }
    }
    for(int i=0;i<19;i++){
        for(int j=0;j<19;j++){
            cnt1=0;
            cnt2=0;
            for(int k=0;k<5;k++){
                if(board[i][j]==1 && board[i+k][j+k]==1){
                    cnt1++;
                }
                else if(board[i][j]==2 && board[i+k][j+k]==2){
                    cnt2++;
                }
                if(cnt1==5){
                    x=i+3,y=j+3;
                    winner=1;
                }
                else if(cnt2==5){
                    x=i+3,y=j+3;
                    winner=2;
                }
            }

        }
    }
    for(int i=0;i<19;i++){
        for(int j=18;j>=4;j--){
            cnt1=0;
            cnt2=0;
            for(int k=0;k<5;k++){
                if(board[i][j]==1 && board[i+k][j-k]==1){
                    cnt1++;
                }
                else if(board[i][j]==2 && board[i+k][j-k]==2){
                    cnt2++;
                }
                if(cnt1==5){
                    x=i+3,y=j-1;
                    winner=1;
                }
                else if(cnt2==5){
                    x=i+3,y=j-1;
                    winner=2;
                }
            }

        }
    }
    
    if(winner==0){
        cout << winner;
    }
    else if(winner==1){
        cout << winner << endl;
        cout << x << " " << y;
    }
    else{
        cout << winner << endl;
        cout << x << " " << y;
    }
    



    return 0;
}