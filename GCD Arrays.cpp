#include <bits/stdc++.h>
using namespace std;
#define ll long long
void FAST() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve() {
    int l , r , k; cin >> l >> r >> k;
    int n = (r - l) + 1;
    auto odds = -1;
    if (n % 2 == 0) {
        odds = n / 2;
    }
    else {
        odds = (n / 2 ) + (l % 2);
    }
    if (k >= odds || (n == 1 && l != 1)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
int main() {
    FAST();
    int t; cin >> t;
    while (t--) {
        solve();
    }
}
