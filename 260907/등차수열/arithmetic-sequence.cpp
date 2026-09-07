#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int n;
int a[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Please write your code here.
    int max_count=0;

    for(int k=1;k<100;k++){
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(abs(a[i]-k)==abs(a[j]-k)){
                    count++;
                }
            }
            max_count=max(max_count,count);
        }
    }
    cout << max_count;
    return 0;
}