#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ln "\n"
#define all(x) x.begin(), x.end()
#define loop(i, a, b) for(int i = a; i <= (b); ++i)
void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int RHS(int a , int k){
    return a - k;
}
void solve()
{
    int n; cin >> n;
    vector<ll> a(n) ;
    loop(i , 0 , n - 1) {cin >> a[i];}
    sort(all(a));
    int min_number = a[0];
    vector<int> results;
    loop(i , 1 , n - 1){
        int diff = a[i] - min_number;
        if (diff > min_number){
            results.push_back(diff);
        }                                   
    }
    if( results.size() < n - 1){
        cout << min_number << ln;
    }
    else{
        cout << *min_element(all(results)) << ln;
    }
}
int main()
{
    fast_io();
    int t = 1;
    cin >> t;
    int i = 0;
    for (int i = 1; i <= t; i++)
    {
         solve();
    }
    return 0;
}
