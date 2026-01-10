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
uint32_t invert31(uint32_t x)
{
    return (~x) & ((1u << 31) - 1);
}

void solve()
{
    int n;
    cin >> n;

    map<uint32_t, int> waiting;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        uint32_t x;
        cin >> x;

        uint32_t inv = invert31(x);

        if (waiting[inv] > 0)
        {
            waiting[inv]--;
        }
        else
        {
            waiting[x]++;
            sum++;
        }
    }

    cout << sum << ln;
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
