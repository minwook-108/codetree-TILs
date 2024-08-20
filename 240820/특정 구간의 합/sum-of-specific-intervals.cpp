#include <iostream>
using namespace std;
int A[100]={};

int main() {
    int n,m;
    int a1,a2;
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        cin >> A[i];
    }
    for(int i=0;i<m;i++){
        cin >> a1 >> a2;
        int sum=0;
        for(int i=a1;i<=a2;i++){
            sum+=A[i];
        }
        cout << sum << endl;
    }
    return 0;
}