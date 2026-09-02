#include <iostream>
using namespace std;

int N;
int x1[100], x2[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> x2[i];
        // x1, x2는 서로 다른 선상의 좌표이므로 swap하면 안 됩니다.
    }

    int counting[100] = {};

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) continue;
            
            // 두 평행선 사이를 잇는 선분이 교차하는(겹치는) 조건
            if ((x1[i] <= x1[j] && x2[i] >= x2[j]) || (x1[i] >= x1[j] && x2[i] <= x2[j])) {
                counting[i]++;
            }
        }
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (counting[i] == 0) count++;
    }

    cout << count;
    return 0;
}