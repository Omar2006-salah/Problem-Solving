#include <bits/stdc++.h>
using namespace std;
// command to test time
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
vector<long long> Represntation(long long n, int base = 2)
{

    vector<long long> ans;
    while (n > 0)
    {
        ans.push_back(n % base);
        n /= base;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
vector<long long> generate_numbers_with_exactly_one_zero(int n) {
    vector<long long> result;

    if (n < 2) return result;
    long long first = (1ll << n );
    long long BigNumber = first - 1;
    for (int pos= 0; pos <= n - 2 ; pos++) {
        // change pos bit to zero
        long long num = (BigNumber ^ (1ll << pos));
        result.push_back(num);
    }
    return result;
}
void solve(){
    ll a , b; cin >> a >> b;
    auto va = Represntation(a);
    auto vb = Represntation(b);
    int min_bits_number = min(va.size() , vb.size());
    int max_bits_number = max(va.size() , vb.size());
    ll total_count = 0;
    // calc all between [va.size() + 1 ---> vb.size() - 1 ]
    for (int i = min_bits_number + 1 ; i <= max_bits_number - 1 ; i++) {
        total_count += (i - 1);
    }
    if (min_bits_number == max_bits_number) {
        auto nsa = generate_numbers_with_exactly_one_zero(min_bits_number);
        for (auto &it : nsa) {
            if (it >= a && it <= b) {
                total_count++;
            }
        }
    }
    else {
        auto nsa = generate_numbers_with_exactly_one_zero(min_bits_number);
        auto nsb = generate_numbers_with_exactly_one_zero(max_bits_number);
        for (auto &it : nsa) {
            if (it >= a && it <= b) {
                total_count++;
            }
        }
        for (auto &it : nsb) {
            if (it >= a && it <= b) {
                total_count++;
            }
        }
    }
    cout << total_count << endl;
}
void test() {

}
int main()
{
     Fast();
     //Read(); // Command it When Submit in CodeForces
    int t = 1;
    //cin >> t;
    while (t--)
    {
       solve();
    }
    return 0;
}
