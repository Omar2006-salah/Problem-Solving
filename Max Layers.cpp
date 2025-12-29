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
ll fast_power(int n, int b, ll Mod)
{
    ll res = 1;
    ll base = n % Mod;
    while (b > 0)
    {
        if (b % 2 == 1)
            res = (res * base) % Mod;
        base = (base * base) % Mod;
        b /= 2;
    }
    return res;
}
// ============ MAIN SOLUTION ============
vector<ll> Sums;
vector<ll> nums;
void PreProcess()
{
    const ll MAX_SIZE = 2000000;
    ll total_sum = 0;
    int i = 0;
    while (total_sum < MAX_SIZE)
    {
        ll current_size = fast_power(2, i, MY_MOD);
        total_sum += current_size;
        Sums.push_back(total_sum);
        nums.push_back(current_size);
        i++;
    }
}
int Max_Layers(ll a, ll b)
{
    auto it = upper_bound(Sums.begin(), Sums.end(), a + b);
    return (it - Sums.begin());
}
int RoadMap_1(ll a, ll b, int mx)
{
    // first a
    // secound b
    int i = 0;
    int count = 0;
    while(true){
        if (i % 2 == 0){
            if (a - nums[i] < 0){
                break;
            }
            else{
                a -= nums[i];
                count++;
                i++;
            }
        }
        else{
            if (b - nums[i] < 0){
                break;
            }
            else{
                b -= nums[i];
                count++;
                i++;
            }
        }
    }
    return count;
}
int RoadMap_2(ll a, ll b, int mx)
{
    // first b
    // secound a
    int i = 0;
    int count = 0;
    while(true){
        if (i % 2 != 0){
            if (a - nums[i] < 0){
                break;
            }
            else{
                a -= nums[i];
                count++;
                i++;
            }
        }
        else{
            if (b - nums[i] < 0){
                break;
            }
            else{
                b -= nums[i];
                count++;
                i++;
            }
        }
    }
    return count;
}
void solve()
{
    int a , b; cin >> a >> b;
    ll mx = Max_Layers(a , b);
    cout << max(RoadMap_1(a , b , mx) , RoadMap_2(a , b , mx)) << ln;
}

int main()
{
    PreProcess();
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
