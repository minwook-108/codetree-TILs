#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    int q,n;
    cin >> a >> q;
    while(q--){
        cin >> n;
        if(n==1){
            a = a.substr(1,a.length()-1) + a[0];
        }
        else if(n==2){
            a = a[a.length()-1] + a.substr(0,a.length()-1);
        }
        else{
            char b;
            for(int i=0;i<a.length()/2;i++){
                b=a[i];
                a[i] = a[a.length()-i-1];
                a[a.length()-1-i]=b;
            }
        }
        cout << a << endl;
    }
    return 0;
}