#include <iostream>
using namespace std;

int n;
int a[10], b[10], c[10];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i] >> c[i];
    int cnt = 0;

    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            for (int k = 1; k < 10; k++) {
                if (i == j || j == k || i == k) continue; // 자릿수 중복이면 후보에서 제외

                bool ok = true;
                for (int t = 0; t < n; t++) {
                    int x = a[t] / 100;
                    int y = (a[t] / 10) % 10;
                    int z = a[t] % 10;

                    int cnt1 = 0, cnt2 = 0;
                    if (x == i) cnt1++;
                    if (y == j) cnt1++;
                    if (z == k) cnt1++;
                    if (x == j || x == k) cnt2++;
                    if (y == i || y == k) cnt2++;
                    if (z == i || z == j) cnt2++;

                    if (cnt1 != b[t] || cnt2 != c[t]) {
                        ok = false;
                        break; // 이 힌트 하나라도 안 맞으면 이 후보는 탈락 -> t 루프만 빠져나감
                    }
                }

                if (ok) cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}