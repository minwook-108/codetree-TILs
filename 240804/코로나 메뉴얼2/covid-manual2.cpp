#include <iostream>
using namespace std;

int main() {
    string arr1[3];
    int arr[3];
    int arrcount[4]={};
    int count=0;
    for(int i=0;i<3;i++){
        cin >> arr1[i] >> arr[i];
        if(arr1[i]=="Y" && arr[i]>=37){
            arrcount[0]++;
        }
        else if(arr1[i]=="N" && arr[i]>=37){
            arrcount[1]++;
        }
        else if(arr1[i]=="Y" && arr[i]<37){
            arrcount[2]++;
        }
        else{
            arrcount[3]++;
        }
    }
    if(arrcount[0]>=2){
        for(int i=0;i<4;i++){
            cout << arrcount[i] << " ";
        }
        cout << "E";
    }
    else{
        for(int i=0;i<4;i++){
            cout << arrcount[i] << " ";
        }
    }
    return 0;
}