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
// ============ MAIN SOLUTION ============
void solve()
{
    int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];


        for (int bit = 30; bit >= 0; bit--)
        {
            if (k == 0)
                break;

            long long zeroCount = 0;

            for (int i = 0; i < n; i++)
            {
                if (((a[i] >> bit) & 1) == 0)
                    zeroCount++;
            }

            if (zeroCount <= k)
            {
                for (int i = 0; i < n; i++)
                {
                    a[i] = a[i] | (1LL << bit);
                }
                k -= zeroCount;
            }
        }

        long long ans = a[0];
        for (int i = 1; i < n; i++)
        {
            ans &= a[i];
        }

        cout << ans << "\n";
}
int main()
{

    Fast();
    Read(); // Command it When Submit in CodeForces
    int t = 1;
     cin >> t;
    while (t--)
    {

        solve();
    }
    return 0;
}
