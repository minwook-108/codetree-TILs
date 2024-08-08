#include <iostream>
using namespace std;

int main() {
    int arr[11][11]={};
    int n,m,a,b;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> a >> b;
        arr[a][b] = a*b;
      
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}