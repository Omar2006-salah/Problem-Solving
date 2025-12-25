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
void solve()
{
    ll n; cin >> n;
    if(n <= 2){
        cout << n ;
    }
    else{
        // as it odd number

        if(n % 2 == 1){
            cout << n * (n - 1) * (n - 2);
        }
        else{
            if(n % 3 == 0){
                cout << ((n - 1) * (n - 2) * (n - 3) );
            }
            else{
                cout << n * (n - 1) * (n - 3);
            }
        }
    }
}

int main()
{
    fast_io();
    int t = 1;
    // cin >> t;
    int i = 0;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}
