#include <iostream>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum = 0;
            int av = 0;
            int check = 1000;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            av = sum/(j-i+1);
            check = sum%(j-i+1);
            for(int k=i;k<=j;k++){
                if(check==0 && av==arr[k]){
                    cnt++;
                    break;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}