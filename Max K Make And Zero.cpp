#include <bits/stdc++.h>
using namespace std;

// ============ TYPEDEFS & MACROS ============
typedef long long ll;
#define all(x) x.begin(), x.end()
#define ln "\n"
const int MY_MOD = 1e9 + 7;
void Read()
{
    // File I/O
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
void Fast()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
vector<long long> Represntation(long long n, int base = 2)
{

    vector<long long> ans;
    while (n > 0)
    {
        ans.push_back(n % base);
        n /= base;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
// ============ MAIN SOLUTION ============
void solve()
{
    int n ; cin >> n;
    auto v = Represntation(n);
    int bits = v.size();
    bits--;
    int last_number = (1ll << bits) - 1;
    cout << last_number << endl;
}
int main()
{

    Fast();
    //Read(); // Command it When Submit in CodeForces
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
