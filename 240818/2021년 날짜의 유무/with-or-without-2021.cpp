#include <iostream>
using namespace std;
bool Print(int M, int D){
    if(M>=1 && M<=12){
        if(M==2){
            if(D>28){
                return false;
            }
            else{
                return true;
            }
        }
        if(M==1 || M==3 || M==5 || M==7 || M==8 || M==10 || M==12){
            if(D>=1 && D<=31){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            if(D>=1 && D<=30){
                return true;
            }
            else{
                return false;
            }
        }
    }
    else{
        return false;
    }
}
int main() {
    int M,D;
    cin >> M >> D;
    if(Print(M,D)==true){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}