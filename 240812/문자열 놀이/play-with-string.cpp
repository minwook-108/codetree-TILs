#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int n,a,b,q;
    char c,d;
    cin >> s >> q;
    while(q--){
        cin >> n;
        if(n==1){
            cin >> a >> b;
            char temp;
            temp=s[a-1];
            s[a-1]=s[b-1];
            s[b-1]=temp;
            cout << s << endl;
        }
        else if(n==2){
            cin >> c >> d;
            for(int i=0;i<s.length();i++){
                if(s[i]==c){
                    s[i]=d;
                }
            }
            cout << s << endl;
        }
    }
    return 0;
}