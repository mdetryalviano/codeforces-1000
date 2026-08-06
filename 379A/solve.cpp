//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int a, b, used = 0; cin >> a >> b;
    int ans = 0;

    while (a > 0) {
        ans += a;
        used += a;

        a = used / b;

        used = used % b;
    }

    cout << ans;
    
    return 0;
}