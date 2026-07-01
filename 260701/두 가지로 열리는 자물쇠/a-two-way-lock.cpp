#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int N;
int a1, b1, c1;
int a2, b2, c2;

bool check1(int a, int b, int c){
    bool chk1 = false;
    if(abs(a-a1)<=2||abs(a-a1)>=N-2){
        if(abs(b-b1)<=2||abs(b-b1)>=N-2){
            if(abs(c-c1)<=2||abs(c-c1)>=N-2){
                chk1=true;
            }
        }
    }
    return chk1;
    
}
bool check2(int a, int b, int c){
    bool chk2 = false;
    if(abs(a-a2)<=2||abs(a-a2)>=N-2){
        if(abs(b-b2)<=2||abs(b-b2)>=N-2){
            if(abs(c-c2)<=2||abs(c-c2)>=N-2){
                chk2=true;
            }
        }
    }
    return chk2;
    
}

int main() {
    cin >> N;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;

    // Please write your code here.
    int cnt=0;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            for(int k=1;k<=N;k++){
                if(check1(i,j,k)==true || check2(i,j,k)==true){
                    cnt++;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}