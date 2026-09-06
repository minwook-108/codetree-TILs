#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int X, Y;

bool GetInterest(int a){
    int arr[7]={};
    int cnt=0,max_first=0,k=a;
    for(int i=6;i>=0;i--){
        arr[i]=k/pow(10,i);
        k=k-arr[i]*pow(10,i);
        if(arr[i]!=0){
            cnt=i;
        }
        max_first = max(max_first,cnt);
    }
    cnt=0;
    int count[10]={};
    for(int i=0;i<=max_first;i++){
        count[arr[i]]++;
    }
    int cnt1=0,cnt2=0;
    for(int i=0;i<10;i++){
        if(count[i]==0){
            cnt1++;
        }
        if(count[i]==1){
            cnt2++;
        }
    }

    if(cnt1==8 && cnt2==1){
        return true;
    }
    else{
        return false;
    }


}

int main() {
    cin >> X >> Y;

    // Please write your code here.
    int count=0;
    for(int i=X;i<=Y;i++){
        if(GetInterest(i)){
            count++;
        }
    }
    cout << count;
    return 0;
}