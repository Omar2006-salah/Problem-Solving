#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ln "\n"
#define all(x) x.begin(), x.end()
#define loop(i, a, b) for(int i = a; i <= (b); ++i)
void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
ll getDivisors(ll n) {
    ll count = 0;
    for (ll i = 1; 1ll * i * i <= n; ++i) {
        if (n % i == 0) {
            count++;
            if (i * i != n) {
                count++;
            }
        }
    }
    return count;
}
void solve()
{
ll n; cin >> n;
    cout << getDivisors(n) << endl;
}
int main()
{
    fast_io();
    int t = 1;
   // cin >> t;
    int i = 0;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}
