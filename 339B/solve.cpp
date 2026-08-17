//acc
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n, m; cin >> n >> m;

    ll ans = 0;
    int cur = 1;

    for (int i = 1; i <= m; i++) {
        int a; cin >> a;

        if (a >= cur)
            ans += a - cur;
        else
            ans += (n - cur) + a;

        cur = a;
    }

    cout << ans;
    
    return 0;
}