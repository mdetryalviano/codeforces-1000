//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n, m; cin >> n >> m;

    int max_turns = 0, ans = 1;

    for (int i = 1; i <= n; i++) {
        int a; cin >> a;

        int turns = (a + m - 1) / m;

        if (turns >= max_turns) {
            max_turns = turns;
            ans = i;
        }
    }

    cout << ans;
    
    return 0;
}