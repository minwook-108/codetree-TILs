#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[20];
    int n;
    cin >> n;
    char a;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cin >> a;
    int cnt=0,sum=0;
    for(int i=0;i<n;i++){
        if(a==arr[i][0]){
            cnt++;
            sum+=arr[i].length();
        }
    }
    cout << cnt << " ";
    double avg = (double)sum/cnt;
    cout << fixed;
    cout.precision(2);
    cout << avg;
    return 0;
}