//acc
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    ll n, m, a; cin >> n >> m >> a;
    ll ans = ceil((double)n/a) * ceil((double)m/a);
     
    cout << ans;
    
    return 0;
}

// without ceil():
// ll ans = ((n + a - 1) / a) * ((m + a - 1) / a);