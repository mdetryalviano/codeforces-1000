//acc
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll x, y, a, b; cin >> x >> y >> a >> b;

    ll fs = (x + y) * a;
    ll ss = min(x, y) * b + abs(x - y) * a;

    ll ans = min(fs, ss);

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t;

    while (t--) solve();
    
    return 0;
}