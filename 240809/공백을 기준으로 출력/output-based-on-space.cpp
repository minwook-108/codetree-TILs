#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int cnt1=0,cnt2=0;
    for(int i=0;i<a.length();i++){
        if(a[i]==' '){
            cnt1++;
            for(int j=i;j<a.length()-1;j++){
                a[j]=a[j+1];
            }
            i--;
        }
    }
    for(int i=0;i<b.length();i++){
        if(b[i]==' '){
            cnt2++;
            for(int j=i;j<b.length()-1;j++){
                b[j]=b[j+1];
            }
            i--;
        }
    }
    for(int i=0;i<a.length()-cnt1;i++){
        cout << a[i];
    }
    for(int i=0;i<b.length()-cnt2;i++){
        cout << b[i];
    }
    return 0;
}