#include <iostream>

using namespace std;

int n;
int arr[20];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int max_val=-1;
    for(int i=0;i<n;i++){
        int a1=0,b1=0,c1=0,d1=0;
        a1=arr[i]/1000,b1=(arr[i]-a1*1000)/100,c1=(arr[i]-a1*1000-b1*100)/10,d1=(arr[i]-a1*1000-b1*100-c1*10)/1;
        for(int j=i+1;j<n;j++){
            int a2=arr[j]/1000,b2=(arr[j]-a2*1000)/100,c2=(arr[j]-a2*1000-b2*100)/10,d2=(arr[j]-a2*1000-b2*100-c2*10)/1;
            for(int k=j+1;k<n;k++){
                int a3=arr[k]/1000,b3=(arr[k]-a3*1000)/100,c3=(arr[k]-a3*1000-b3*100)/10,d3=(arr[k]-a3*1000-b3*100-c3*10)/1;
                if((d1+d2+d3<10)&&(c1+c2+c3<10)&&(b1+b2+b3<10)&&(a1+a2+a3<10)){
                    int sum=arr[i]+arr[j]+arr[k];
                    if(max_val<sum){
                        max_val=sum;
                    }
                }
            }
        }
    }
    cout << max_val;

    return 0;
}