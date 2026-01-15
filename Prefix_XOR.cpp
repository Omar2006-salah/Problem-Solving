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
    int n; cin >> n;
    vector<int> v(n);
    vector<long long> prefix_xor(n);
    int g_1 = 0 , g_0 = 0;
    for(int i = 0 ; i < n ; i++) {
        cin >> v[i];
        if(i == 0){
            prefix_xor[i] = v[i];
        }
        else{
            prefix_xor[i] = prefix_xor[i - 1] ^ v[i];
        }
    }
    string s; cin >> s;
    for(int i = 0 ; i < n ; i++) {
       if(s[i] == '1'){
        g_1 ^= v[i];
       }
       else{
        g_0 ^= v[i];
       }
    }

    int q; cin >> q;
    while(q--){
        int type; cin >> type;
        if(type == 1){
            int l , r; cin >> l >> r;
            l--;r--;
            long long result = 0;
            if(l == 0){
                result = prefix_xor[r];
            }
            else{
                result = prefix_xor[r] ^ prefix_xor[l - 1];
            }
            g_0 ^= result;
            g_1 ^= result;
        }
        else{
           int g; cin >> g;
           if(g == 0){
            cout << g_0 << " ";
           }
           else{
            cout << g_1 << " ";
           }
        }
    }
    cout << ln;
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
