#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;

    // Please write your code here.
    int cnt=0;
    for(int i=0;i<A.length()-1;i++){
        if(A[i]=='(' && A[i+1]=='('){
            for(int k=i+2;k<A.length()-1;k++){
                if(A[k]==')'&& A[k+1]==')'){
                    cnt++;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}