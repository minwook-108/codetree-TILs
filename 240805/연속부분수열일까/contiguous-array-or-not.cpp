#include <iostream>
using namespace std;

int main() {
    int n1,n2;
    int A[100]={},B[100]={};
    cin >> n1 >> n2;
    for(int i=0;i<n1;i++){
        cin >> A[i];
    }
    for(int i=0;i<n2;i++){
        cin >> B[i];
    }
    int idx1=0,idx2=n1;
    bool s=false;
    for(int i=0;i<n2;i++){
        for(int j=idx1+1;j<=idx2;j++){
            if(B[i]==A[j]){
                idx1=j;
                idx2=j+1;
                s=true;
                break;
            }
            s=false;
        }
    }
    if(s==true){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}