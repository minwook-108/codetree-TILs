#include <iostream>
using namespace std;
int Print(int y, int M, int D){
    if(y%4==0 || (y%4==0 && y%100==0 && y%400==0)){
        if(M==2){
            if(D<=29){
                return 4;
            }
            else{
                return -1;
            }
        }
        if(M==1 || M==3 || M==5 || M==7 || M==8 || M==10 || M==12){
            if(D>=1 && D<=31 && (M==1 || M==12)){
                return 4;
            }
            else if(D>=1 && D<=31 && (M==3 || M==5)){
                return 1;
            }
            else if(D>=1 && D<=31 && (M==7 || M==8)){
                return 2;
            }
            else if(D>=1 && D<=31 && (M==10)){
                return 3;
            }
            else{
                return -1;
            }
        }
        else{
            if(D>=1 && D<=30 && (M==4)){
                return 1;
            }
            else if(D>=1 && D<=30 && (M==6)){
                return 2;
            }
            else if(D>=1 && D<=30 && (M==11 || M==9)){
                return 3;
            }
            else{
                return -1;
            }            
        }
    }
    else{
        if(M==2){
            if(D<=28){
                return 4;
            }
            else{
                return -1;
            }
        }
        if(M==1 || M==3 || M==5 || M==7 || M==8 || M==10 || M==12){
            if(D>=1 && D<=31 && (M==1 || M==12)){
                return 4;
            }
            else if(D>=1 && D<=31 && (M==3 || M==5)){
                return 1;
            }
            else if(D>=1 && D<=31 && (M==7 || M==8)){
                return 2;
            }
            else if(D>=1 && D<=31 && (M==10)){
                return 3;
            }
            else{
                return -1;
            }
        }
        else{
            if(D>=1 && D<=30 && (M==4)){
                return 1;
            }
            else if(D>=1 && D<=30 && (M==6)){
                return 2;
            }
            else if(D>=1 && D<=30 && (M==11)){
                return 3;
            }
            else{
                return -1;
            }            
        }
    }
}
int main() {
    int Y,M,D;
    cin >> Y >> M >> D;
    if(Print(Y,M,D)==1){
        cout << "Spring";
    }
    else if(Print(Y,M,D)==2){
        cout << "Summer";
    }
    else if(Print(Y,M,D)==3){
        cout << "Fall";
    }
    else if(Print(Y,M,D)==4){
        cout << "Winter";
    }
    else{
        cout << -1;
    }
    return 0;
}