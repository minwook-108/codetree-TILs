#include <iostream>
using namespace std;

int main() {
    int n1,n2;
    string A[100]={},B[100]={};
    cin >> n1 >> n2;
    for(int i=0;i<n1;i++){
        cin >> A[i];
    }
    string sum="";
    for(int i=0;i<n2;i++){
        cin >> B[i];
        sum+=B[i];
    }
    string s="";
    bool k=false;
    for(int i=0;i<=n1-n2;i++){
        for(int j=i;j<i+n2;j++){
            s+=A[j];
        }
        if(s==sum){
            k = true;
        }
        s="";
    }
    if(k==true){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}