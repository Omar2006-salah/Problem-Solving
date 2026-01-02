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
int calc_mod(string A, int B)
{
    ll ans = 0, tenPowerX = 1;
    for (ll i = A.size() - 1; i >= 0; --i)
    {
        int digit = (A[i] - '0') % B;
        ans += (digit * tenPowerX) % B;
        ans %= B;
        tenPowerX *= 10 % B;
        tenPowerX %= B;
    }
    return ans;
}
void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    string others = "";
    string zeros = "";
    int count_1 = 0, count_6 = 0, count_8 = 0, count_9 = 0, count_0 = 0;
    for (char &c : s)
    {
        if (c == '1')
        {
            count_1++;
            if (count_1 > 1)
            {
                others.push_back('1');
            }
        }
        else if (c == '6')
        {
            count_6++;
            if (count_6 > 1)
            {
                others.push_back('6');
            }
        }
        else if (c == '8')
        {
            count_8++;
            if (count_8 > 1)
            {
                others.push_back('8');
            }
        }
        else if (c == '9')
        {
            count_9++;
            if (count_9 > 1)
            {
                others.push_back('9');
            }
        }
        else if (c == '0')
        {
            zeros += "0";
        }
        else
        {
            others.push_back(c);
        }
    }
    // calc other % 7
    string calcStr = others + zeros + "0000";
    int rem = calc_mod(calcStr, 7);

    // 1869 --> 0
    // 8961 --> 1
    // 9816 --> 2
    // 6891 --> 3
    // 1698 --> 4
    // 8916 --> 5
    // 1896 --> 6
    string rems[] = {"1869", "8961", "9816", "6891", "1698", "8916", "1896"};
    int cut = max(0, (int)calcStr.size() - 4);
    string prefix = calcStr.substr(0, cut );
    string correct = rems[(7 - rem) % 7];
    string result;
    if (!prefix.empty() && prefix[0] != '0')
        result = prefix + correct;
    else
        result = correct + prefix;
    cout << result << ln;
}
int main()
{

    Fast();
    // Read(); // Command it When Submit in CodeForces
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
        // test();
    }

    return 0;
}
