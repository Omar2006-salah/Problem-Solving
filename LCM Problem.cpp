#include <bits/stdc++.h>
using namespace std;
#define ll long long
void FAST() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
int main() {
    FAST();
    int t; cin >> t;
    while (t--) {
        int l , r; cin >> l >> r;
        if (l * 2 > r) {
            cout << -1 << " " << -1 << "\n";
        }
        else {
            cout << l << " " << l * 2 << "\n";
        }
    }
}
