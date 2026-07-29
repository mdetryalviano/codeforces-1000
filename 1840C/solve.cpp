//acc
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, k, q; cin >> n >> k >> q;
    
    ll ans = 0;
    ll streak = 0;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        if (x <= q) {
            streak++;
            if (streak >= k)
                ans += (streak - k + 1); 
        } else {
            streak = 0;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t;

    while (t--) solve();
    
    return 0;
}