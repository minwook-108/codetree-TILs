#include <iostream>
#include <climits>
using namespace std;

int n;
int numbers[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    // Please write your code here.
    int max_val = 0;
    for(int i=0;i<n;i++){
        for(int j=i+2;j<n;j++){
            int sum = numbers[i]+numbers[j];
            if(max_val<sum){
                max_val=sum;
            }
        }
    }

    cout << max_val;

    return 0;
}