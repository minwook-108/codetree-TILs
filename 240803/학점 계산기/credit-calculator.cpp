#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double arr[5];
    double sum=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
        
    }
    cout << fixed;
    cout.precision(1);
    double avg = sum/n;
    cout << avg << endl;
    if(avg >= 4.0){
        cout << "Perfect";
    }
    else if(avg >=3.0){
        cout << "Good";
    }
    else{
        cout << "Poor";
    }
    return 0;
}