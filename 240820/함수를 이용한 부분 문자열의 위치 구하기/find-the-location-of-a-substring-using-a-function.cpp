#include <iostream>
#include <string>
using namespace std;
int FindIdx(string a, string b){
    if(a.find(b)!=string::npos){
        return a.find(b);
    }
    else{
        return -1;
    }
}
int main() {
    string a,b;
    cin >> a;
    cin >> b;
    cout << FindIdx(a,b);
    return 0;
}