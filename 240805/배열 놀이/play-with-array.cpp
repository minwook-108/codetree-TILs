#include <iostream>
using namespace std;

int main() {
    int n,q, q1,a,b,s,e,idx=-1;
    cin >> n >> q;
    int arr[100];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<q;i++){
        cin >> q1;
        if(q1==1){
            cin >> a;
            for(int j=0;j<n;j++){
                if(j==(a-1)){
                    cout << arr[j] << endl;
                }
            }
        }
        else if(q1==2){
            cin >> b;
            for(int j=0;j<n;j++){
                if(arr[j]==b){
                    idx=j;
                    cout << j+1 << endl;
                    break;
                }
            }
        }
        else{
            cin >> s >> e;
            int sum=0;
            for(int j=s-1;j<=e-1;j++){
                cout << arr[j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}