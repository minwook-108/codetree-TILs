#include <iostream>
using namespace std;

int main() {
    int arr[100][100] = {};
    int n, m;
    cin >> n >> m;
    int num = 1;

    for (int cnt = 0; cnt < n + m - 1; cnt++) {
        for (int i = 0; i < n; i++) {
            int j = cnt - i;
            if (j >= 0 && j < m) {
                arr[i][j] = num++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}