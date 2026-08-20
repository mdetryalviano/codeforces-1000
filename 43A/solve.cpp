//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n; cin >> n;

    string first_team = "", second_team = "";
    int score_first = 1, score_second = 0;

    while (n--) {
        string s; cin >> s;

        if (first_team == "")
            first_team += s;

        if (s == first_team)
            score_first++;
        else {
            second_team = s;
            score_second++;
        }
    }

    (score_first > score_second) ? cout << first_team << "\n" : cout << second_team << "\n";
    
    return 0;
}