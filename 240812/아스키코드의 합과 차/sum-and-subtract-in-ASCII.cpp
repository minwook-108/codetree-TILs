#include <iostream>
using namespace std;

int main() {
    char a,b;
    cin >> a >> b;
    int result,sum;
    if(a>b){
        result = (int)(a-b);
    }
    else{
        result = (int)(b-a);
    }
    sum = (int)(a+b);
    cout << sum << " " << result;
    return 0;
}