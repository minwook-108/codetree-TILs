#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <climits>
using namespace std;

int n;
int x[100];
int y[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    int min_distance=INT_MAX;
    for(int i=1;i<n-1;i++){
        int sum=0;
        for(int j=1;j<n;j++){
            if(j==i){
                sum+=abs(x[j+1]-x[j-1])+abs(y[j+1]-y[j-1]);
                j++;
                continue;
            }
            sum+=abs(x[j]-x[j-1])+abs(y[j]-y[j-1]);
            
        }
        if(min_distance>sum){
            min_distance=sum;
        }
    }
    cout << min_distance;
    return 0;
}