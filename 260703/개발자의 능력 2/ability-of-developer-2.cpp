#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int ability[6];

int main() {
    for (int i = 0; i < 6; i++) {
        cin >> ability[i];
    }
    int team_score[3]={};
    // Please write your code here.
    sort(ability,ability+6);
    for(int i=0;i<3;i++){
        team_score[i] = ability[i]+ability[5-i];
        
    }
    int max_team=0,min_team=INT_MAX;
    for(int i=0;i<3;i++){
        max_team = max(max_team,team_score[i]);
        min_team = min(min_team,team_score[i]);
    }


    cout << max_team-min_team;

    return 0;
}