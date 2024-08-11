#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    int cnt1=0,cnt2=0;
    for(int i=0;i<a.length()-1;i++){
        if(a.substr(i,2)=="ee"){
            cnt1++;
        }
        else if(a.substr(i,2)=="eb"){
            cnt2++;
        }
    }
    cout << cnt1 << " " << cnt2;
    return 0;
}