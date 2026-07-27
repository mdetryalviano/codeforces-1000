//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    vector<int> a = {4,7,44,47,74,77,444,447,474,477,744,747,777};
    string ans = "NO\n";

    int n; cin >> n;

    for (int i : a) {
        if (n % i == 0) {
            ans = "YES\n";
            break;
        }
    }

    cout << ans;
    
    return 0;
}