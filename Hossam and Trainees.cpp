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
const int N = 31623; // sqrt(1e9)
vector<int> primes;
void sieve()
{
    vector<bool> is_prime(N + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i <= N; i++)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
            if ((ll)i * i <= N)
            {
                for (ll j = 1LL * i * i; j <= N; j += i)
                    is_prime[j] = false;
            }
        }
    }
}
unordered_set<int> prime_factors(ll n)
{
    unordered_set<int> v;
    for (int p : primes)
    {
        if (1LL * p * p > n)
            break;
        while (n % p == 0)
        {
            v.insert(p);
            n /= p;
        }
    }
    if (n > 1)
        v.insert(n);
    return v;
}
void solve()
{
    unordered_set<int> st;
    int n;
    cin >> n;
    bool there = false;
    for (int i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
        if (i == 0)
        {
            auto d = prime_factors(num);
            for(auto &it : d){
                st.insert(it);
            }
        }
        else if (there == false)
        {
            auto d = prime_factors(num);
            for(auto &it : d){
                if(st.count(it)){
                    there = true;
                    break;
                }
                else{
                    st.insert(it);
                }
            }   
        }
    }
    if (there){
        cout << "YES" << ln;
    }
    else{
        cout << "NO" << ln;
    }
}
int main()
{
    sieve();
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
