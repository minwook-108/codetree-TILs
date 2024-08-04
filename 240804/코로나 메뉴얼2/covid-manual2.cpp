#include <iostream>
using namespace std;

int main() {
    string arr1[3];
    int arr[3];
    int arrcount[3]={1, 1, 1};
    int count=0;
    for(int i=0;i<3;i++){
        cin >> arr1[i] >> arr[i];
        if(arr1[i]=="Y" && arr[i]>=37){
            count++;
        }
    }
    if(count>=2){
        for(int i=0;i<count;i++){
            arrcount[i]=0;
        }
        cout << count << " ";
        for(int i=0;i<3;i++){
            cout << arrcount[i] << " ";
        }
        cout << "E";
    }
    else{
        for(int i=2;i>=3-count;i--){
            arrcount[i]=0;
         }
        cout << count << " ";
        for(int i=0;i<3;i++){
            cout << arrcount[i] << " ";
        }
    }
    return 0;
}