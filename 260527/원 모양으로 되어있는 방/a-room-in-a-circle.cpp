#include <iostream>
#include <climits>

using namespace std;

int n;
int a[1003];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Please write your code here.
    int min_number=INT_MAX;
    for(int i=0;i<n;i++){
        int k=i;
        int sum=0;
        for(int j=0;j<n-1;j++){
            sum += a[k]*(j+1);
            k=(k+1)%n;
        }
        if(min_number>sum){
            min_number=sum;
        }
    }
    cout << min_number;

    return 0;
}