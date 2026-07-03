//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    string s; cin >> s;
    string target = "hello";
    int j = 0;

    for (int i = 0; i < s.length(); i++) {
        if (target[j] == s[i])
            j++;
    }

    (j >= 5) ? cout << "YES\n" : cout << "NO\n";

    return 0;
}