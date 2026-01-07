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
void solve(){
    int a , b;
     cin >> a >> b;
    // is there 1 --> 1
    ll sum = 0;
    for(int bit = 0 ; bit < 32 ; bit++){
        int bit_a = (a & (1ll << bit));
        int bit_b = (b & (1ll << bit));
        if (bit_a && bit_b){
            sum += (1ll << bit);
        }
    }
    // not sum will be the x
    cout << (a ^ sum) + (b ^ sum) << ln;
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
