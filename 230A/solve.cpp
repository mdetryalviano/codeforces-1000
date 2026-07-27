//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int s, n; cin >> s >> n;
    vector<pair<int, int>> a(n);

    for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second; 

    sort(a.begin(), a.end());

    for (const auto& i : a) {
        if (s > i.first) {
            s += i.second;
        } else {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    
    return 0;
}