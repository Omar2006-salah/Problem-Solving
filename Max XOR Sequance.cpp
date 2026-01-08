#include <bits/stdc++.h>
using namespace std;
// Color White --> 7  , Green --> 2;
// ============ TYPEDEFS & MACROS ============
typedef long long ll;
#define all(x) x.begin(), x.end()
#define ln "\n"
const int MY_MOD = 1e9 + 7;
// ============ Colors ============
#define RESET   "\033[0m"

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define PURPLE  "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
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
long long getLastTerm(long long first, long long diff, long long count) {
    return first + (count - 1) * diff;
}
long long getArithmeticSum(long long first, long long diff, long long count) {
    long long last = getLastTerm(first, diff, count);
    return count * (first + last) / 2;
}
void solve()
{
    int a , b; cin >> a >> b;
    for(int bit = 0 ; bit < 32 ; bit++){
        int bit_a = !(a & (1ll << bit));
        int bit_b = !(b & (1ll << bit));
        if(bit_a != bit_b){
            cout << (1ll << bit) << ln;
            break;
        }
    }
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
