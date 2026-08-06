//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n; cin >> n;

    int resx = 0, resy = 0, resz = 0;
 
    for (int i = 0; i < n; i++) {
        int x, y, z; cin >> x >> y >> z;

        resx += z; resy += y; resz += z;
    }
 
    (resx == 0 && resy == 0 && resz == 0) ? cout << "YES\n" : cout << "NO\n";
    
    return 0;
}