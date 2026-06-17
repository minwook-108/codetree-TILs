#include <iostream>
#include <algorithm>
using namespace std;

int N;
int pos[100],chk_pos[100];
char alpha[100];

int main() {
    cin >> N;
    int max_pos = 0;
    for (int i = 0; i < N; i++) {
        cin >> pos[i] >> alpha[i];
        chk_pos[i]=pos[i];
        if(max_pos<pos[i]){
            max_pos=pos[i];
        }
    }
    sort(chk_pos,chk_pos+N);
    // Please write your code here.
    int Max_num = 0;
    for(int i=0;i<N;i++){
        int num=0;
        int count_G=0,count_H=0;
        for(int j=chk_pos[i];j<=max_pos;j++){
            bool chk=false;
            for(int k=0;k<N;k++){
                if(j==pos[k]){
                    if(alpha[k]=='G'){
                        count_G++;
                        chk = true;
                        break;
                    }
                    else if(alpha[k]=='H'){
                        count_H++;
                        chk=true;
                        break;
                    }
                }

            }
            if(chk==true && ((count_G>0 && count_H==0) || (count_H>0 && count_G==0) || count_G==count_H)){
                num=j-chk_pos[i];
            }
            if(Max_num<num){
                Max_num=num;
            }
            
            
        }
    }

    cout << Max_num;
    return 0;
}