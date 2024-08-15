#include <iostream>
#include <string>
using namespace std;
bool Check(int a){
    string k;
    k=to_string(a);
    for(int j=0;j<k.length();j++){
        if(k[j]=='3'||k[j]=='6'||k[j]=='9'||a%3==0){
            return true;
        }
    }
    return false;
}
int Count3(int a,int b){
    int cnt=0;
    for(int i=a;i<=b;i++){
        if(i%3==0 || Check(i)){
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int a,b;
    cin >> a >> b;
    int result = Count3(a,b);
    cout << result;
    return 0;
}