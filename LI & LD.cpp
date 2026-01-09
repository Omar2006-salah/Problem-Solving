#include <bits/stdc++.h>
using namespace std;
// Color White --> 7  , Green --> 2;
// ============ TYPEDEFS & MACROS ============
typedef long long ll;
#define all(x) x.begin(), x.end()
#define ln "\n"
const int MY_MOD = 1e9 + 7;
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
pair<int, int> GenerateAllIncreasing(vector<int> &v)
{
    int n = v.size();
    vector<vector<int>> results;
    vector<pair<int, int>> size_and_sum;
    for (int mask = 0; mask < (1ll << n); mask++)
    {
        vector<int> nums;
        ll sum = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int pos = n - i - 1;
            if (mask & (1ll << pos))
            {
                if (nums.empty())
                {
                    nums.push_back(v[i]);
                    count++;
                    sum += v[i];
                }
                else
                {
                    if (nums.back() > v[i])
                    {
                        break;
                        // faild sub sequnce
                    }
                    else
                    {
                        nums.push_back(v[i]);
                        count++;
                        sum += v[i];
                    }
                }
            }
        }
        pair<int, int> p;
        p.first = count;
        p.second = sum;
        if (p.first >= 1)
        {
            size_and_sum.push_back(p);

            results.push_back(nums);
        }
    }
    sort(all(size_and_sum), greater<pair<int, int>>());

    return *size_and_sum.begin();
}
void solve()
{
    int n;
    cin >> n;
    vector<int> nums(n), v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        v[n - i - 1] = nums[i]; // for not taking time of built in function reverse
    }
    auto p1 = GenerateAllIncreasing(nums);
    auto p2 = GenerateAllIncreasing(v);
    cout << p1.first << " " << p1.second << " " << p2.first << " " << p2.second << ln;
}
int main()
{

    Fast();
     Read(); // Command it When Submit in CodeForces
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
