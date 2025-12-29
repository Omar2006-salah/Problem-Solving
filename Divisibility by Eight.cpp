#include <bits/stdc++.h>
using namespace std;

// ============ TYPEDEFS & MACROS ============
typedef long long ll;
#define mp make_pair
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x.size())
#define ff first
#define ss second
#define ln "\n"
#define loop(i, a, b) for (int i = a; i <= b; i++)
const int MY_MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;
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
    string s;
    cin >> s;
    int n = s.length();
    if(s.find("8")!= string::npos){
        cout << "YES" << ln;
        cout << 8 << ln;
        return ;
    }
    if(s.find("0")!= string::npos){
        cout << "YES" << ln;
        cout << 0 << ln;
        return ;
    }
    loop(i, 0, n - 1)
    {
        loop(j, i + 1, n - 1)
        {
            loop(k, j + 1, n - 1)
            {
                if (s[i] - '0' == 0)
                {
                    continue;
                }
                int num = ((s[i] - '0') * 100) + ((s[j] - '0') * 10) + ((s[k] - '0') * 1);
                if (num % 8 == 0)
                {
                    cout << "YES" << ln;
                    cout << num << ln;
                    return ;
                }
            }
        }
    }

    loop(i, 0, n - 1)
    {
        loop(j, i + 1, n - 1)
        {
            if (s[i] - '0' == 0)
            {
                continue;
            }
            int num = ((s[i] - '0') * 10) + ((s[j] - '0') * 1);
            if (num % 8 == 0)
            {
                cout << "YES" << ln;
                cout << num << ln;
                return ;
            }
        }
    }
    cout << "NO" << ln;
}
int main()
{

    Fast();
    //Read(); // Command it When Submit in CodeForces

    int t = 1;
    //  cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
