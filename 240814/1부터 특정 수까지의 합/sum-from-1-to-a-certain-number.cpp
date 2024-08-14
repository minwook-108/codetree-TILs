#include <iostream>
using namespace std;
int Print(int N){
    int sum=0;
    for(int i=1;i<=N;i++){
        sum+=i;
    }
    return sum/10;
}
int main() {
    int N;
    cin >> N;
    int result = Print(N);
    cout << result;
    return 0;
}