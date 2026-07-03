//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    string s; cin >> s;
    string ans = "";

    for (char i : s) {
        if (tolower(i) == 'a' || tolower(i) == 'o' || tolower(i) == 'y' || tolower(i) == 'e' || tolower(i) == 'u' || tolower(i) == 'i') continue;
        else ans += (string)"." + (char)tolower(i);
    }

    cout << ans;
    
    return 0;
}