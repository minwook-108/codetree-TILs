#include <iostream>
using namespace std;
bool Check(int y){
    if(y%100==0 && y%400!=0){
        return false;
    }
    else if(y%4==0){
        return true;
    }
    else{
        return false;
    }
}
int main() {
    int y;
    cin >> y;
    if(Check(y)){
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;
}