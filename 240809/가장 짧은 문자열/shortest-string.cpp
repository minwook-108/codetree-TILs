#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    int al=a.length(), bl=b.length(),cl=c.length(), max,min;
    if(al>bl && al>cl){
        max =al;
        if(bl>cl){
            min = cl;
        }
        else{
            min = bl;
        }
    }
    else if(bl>al && bl>cl){
        max=bl;
        if(al>cl){
            min=cl;
        }
        else{
            min=al;
        }
    }
    else{
        max=cl;
        if(al>bl){
            min=bl;
        }
        else{
            min=al;
        }
    }
    cout << max-min;
    return 0;
}