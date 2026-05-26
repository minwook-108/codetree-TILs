#include <iostream>
#include <string>

using namespace std;

string a;

int main() {
    cin >> a;

    // Please write your code here.
    bool check = false;
    for(int i=0;i<a.length();i++){
        if(a[i]=='0'){
            a[i]='1';
            check = true;
            break;
        }
    }
    int sum=0;
    for(int i=0;i<a.length();i++){
        if(a[i]=='1'){
            int k=a.length()-i-1;
            int q = 1;
            while(k--){
                q*=2;
            }
            sum+=q;
        }
    }
    if(check==true){
        cout << sum;
    }
    else{
        cout << sum-1;
    }

    return 0;
}