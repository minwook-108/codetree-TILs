#include <iostream>
using namespace std;
int Plus(int a, int b){
    return a+b;
}
int Minus(int a, int b){
    return a-b;
}
int Mulity(int a, int b){
    return a*b;
}
int Division(int a, int b){
    return a/b;
}
int main() {
    int a,c;
    string o;
    cin >> a >> o >> c;
    if(o=="+"){
        cout << a << " " << '+' << " " << c << " = " <<Plus(a,c);
    }
    else if(o=="-"){
        cout << a << " " << '-' << " " << c << " = " << Minus(a,c);
    }
    else if(o=="/"){
        cout << a << " " << '/' << " " << c << " = " << Division(a,c);
    }
    else if(o=="*"){
        cout << a << " " << '*' << " " << c << " = " << Mulity(a,c);
    }
    else{
        cout << "False";
    }
    return 0;
}