#include <iostream>

using namespace std;

int k, n;
int arr[10][20];

int chk(int develop){
    int score[21]={};
    int seq;
    for(int i=0;i<k;i++){
        bool Find_chk = false;
        for(int j=0;j<n;j++){
            if(arr[i][j]==develop){
                Find_chk = true;
                seq=j;
            }
            if(Find_chk==true && seq<j){
                score[arr[i][j]]++;
            }
        }
    }

    int cnt=0;


    for(int i=1;i<21;i++){
        if(score[i]==k){
            cnt++;
        }
    }

    return cnt;

}

int main() {
    cin >> k >> n;

    for (int i = 0; i < k; i++)
        for (int j = 0; j < n; j++) cin >> arr[i][j];

    // Please write your code here.
    int sum = 0;
    for(int j=0;j<n;j++){
        int develop = j+1;
        sum+=chk(develop);
                  
    }

    cout << sum;

    return 0;
}