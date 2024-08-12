#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    int n;
    cin >> a;
    while(a.length()!=1){
        cin >> n;
        if(n>=a.length()){
            a.erase(a.length()-1,1);
        }
        else{
            a.erase(n,1);
        }
        cout << a << endl;
    }
    return 0;
}