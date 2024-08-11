#include <iostream>
#include <string>
using namespace std;

int main() {
    string A,B;
    int cnt=0;
    cin >> A;
    cin >> B;
    for(int i=0;i<A.length()-1;i++){
        if(A.substr(i,2)==B){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}