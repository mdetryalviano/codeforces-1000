//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    string s; cin >> s;
    char fl = s[0];
    string subs_s = s.substr(1, s.length());
    int upp_c = 0;

    for (char i : subs_s) {
        if (i == toupper(i))
            upp_c++;
    }

    if (upp_c == subs_s.length()) {
        if (fl != toupper(fl)) fl = (char)toupper(fl);
        else if (fl == toupper(fl)) fl = (char)tolower(fl);
        transform(subs_s.begin(), subs_s.end(), subs_s.begin(), ::tolower);
        cout << fl << subs_s << '\n';
    } else {
        cout << s << '\n';
    }

    return 0;
}