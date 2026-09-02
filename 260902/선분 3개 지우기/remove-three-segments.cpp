#include <iostream>

using namespace std;

int n;
int l[10], r[10];

bool GetMax(int i1, int i2, int i3){
    int counting[101]={};
    for(int i=0;i<n;i++){
        if(i==i1||i==i2||i==i3){{
            continue;
        }}

        int x1=l[i],x2=r[i];
        for(int j=x1;j<=x2;j++){
            counting[j]++;
        }
    }
    int cnt = 0;
    for(int i=0;i<=100;i++){
        if(counting[i]>1){
            cnt++;
        }
    }

    if(cnt>0){
        return false;
    }
    else{
        return true;
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
    }

    // Please write your code here.
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){

                if(GetMax(i,j,k)){
                    cnt++;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}