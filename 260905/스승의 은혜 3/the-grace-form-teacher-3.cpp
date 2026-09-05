#include <iostream>
#include <algorithm>

using namespace std;

int N, B;
int P[1000];
int S[1000];

int main() {
    cin >> N >> B;
    for (int i = 0; i < N; i++) {
        cin >> P[i] >> S[i];
    }

    int max_people = 0;

    // i번째 학생의 선물에 반값 쿠폰을 적용한다고 가정 (완전탐색)
    for (int i = 0; i < N; i++) {
        int costs[1000]; // 각 학생별 (선물 + 배송비) 총 비용을 담을 배열
        
        // i번째 학생만 선물 반값 적용, 나머지는 원래 가격으로 배열 채우기
        for (int j = 0; j < N; j++) {
            if (i == j) {
                costs[j] = (P[j] / 2) + S[j]; 
            } else {
                costs[j] = P[j] + S[j];
            }
        }

        // 총 비용이 가장 적은 순서대로 오름차순 정렬
        sort(costs, costs + N);

        int sum = 0;
        int cnt = 0;
        
        // 가장 저렴한 비용부터 차례대로 예산 내에서 구매
        for (int j = 0; j < N; j++) {
            if (sum + costs[j] <= B) { 
                sum += costs[j];
                cnt++;
            } else { 
                // 예산을 초과하면 더 이상 살 수 없으므로 중단
                break;
            }
        }
        
        // 최대 학생 수 갱신
        max_people = max(max_people, cnt);
    }

    cout << max_people;
    return 0;
}