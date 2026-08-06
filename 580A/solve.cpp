//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n; cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = 1, c = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i - 1]) {
            c++;
            ans = max(ans, c);
        } else {
            c = 1;
        }
    }

    cout << ans;
    
    return 0;
}