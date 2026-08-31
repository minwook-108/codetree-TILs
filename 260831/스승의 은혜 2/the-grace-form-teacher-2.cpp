#include <iostream>
#include <algorithm>
using namespace std;

int N, B;
int P[1000];

int main() {
    cin >> N >> B;

    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    // Please write your code here.
    sort(P,P+N);
    int max_people = 0;
    for(int i=0;i<N;i++){
        int a = P[i]/2;
        int sum=0;
        int cnt=0;
        for(int j=0; j<N;j++){
            if(i==j){
                sum+=a;
                cnt++;
            }
            else{
                sum+=P[j];
                cnt++;
            }
            if(sum>B){
                max_people = max(max_people,cnt-1);
                break;
            }
            else{
                max_people = max(max_people,cnt);
            }
            
        }
    }

    cout << max_people;

    return 0;
}