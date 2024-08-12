#include <iostream>
#include <string>
using namespace std;

int main() {
    int n,a,sum=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        sum+=a;
    }
    string result = to_string(sum);
    result = result.substr(1,result.length()-1) + result[0];
    cout << result;
    return 0;
}