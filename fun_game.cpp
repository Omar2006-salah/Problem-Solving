#include <bits/stdc++.h>
using namespace std;
// Color White --> 7  , Green --> 2;
// ============ TYPEDEFS & MACROS ============
typedef long long ll;
#define all(x) x.begin(), x.end()
#define ln "\n"
const ll MY_MOD = 1e9 + 7;
// ============ Colors ============
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
// ============ Functions ============
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
    cin >> n;
    string s, t;
    cin >> s >> t;
    if (s == t || s[0] == '1')
    {
        cout << "YES" << ln;
        return;
    }
    if (s[0] == '0' && t[0] == '1')
    {
        // impossible
        cout << "NO" << ln;
        return;
    }
    bool there_1 = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            there_1 = true;
            cout << "YES" << ln;
            return;
        }
        if (!there_1 && s[i] != t[i])
        {
            cout << "NO" << ln;
            return;
        }
    }
    return;
}

int main()
{
    Fast();
    // Read(); // Command it When Submit in CodeForces
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
