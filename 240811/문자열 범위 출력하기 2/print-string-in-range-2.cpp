#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    int n;
    cin >> a;
    cin >> n;
    if(n>=a.length()){
        for(int i=a.length()-1;i>=0;i--){
            cout << a[i];
        }
    }
    else{
        for(int i=a.length()-1;i>=a.length()-n;i--){
            cout << a[i];
        }
    }
    return 0;
}