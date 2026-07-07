#include <iostream>
#include <cstdlib>
#include <climits>
#include <algorithm>

using namespace std;

int arr[5];

int Diff(int i, int j, int k, int l){
    int total_sum = 0;
    for(int x=0;x<5;x++){
        total_sum += arr[x];
    }

    int sum1 = arr[i]+arr[j];
    int sum2 = arr[k]+arr[l];
    int sum3 = total_sum-sum1-sum2;
    if(sum1==sum2 || sum2==sum3 || sum1 == sum3){
        return 0;
    }

    int ret = abs(sum1-sum2);
    ret = max(ret, abs(sum1-sum3));
    ret = max(ret, abs(sum2-sum3));

    return ret;
}

int main() {
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int min_value = INT_MAX;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){

            for(int k=0;k<5;k++){
                for(int l=k+1;l<5;l++){
                    if(k==i || k==j || l==i || l==j){
                        continue;
                    }
                    if(Diff(i,j,k,l)!=0){
                        min_value = min(min_value, Diff(i,j,k,l));
                    }
                    else{
                        if(min_value==INT_MAX){
                            min_value=-1;
                        }
                    }
                }
            }
        }
    }
    cout << min_value;

    return 0;
}