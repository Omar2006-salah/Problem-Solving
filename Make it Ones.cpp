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
void Read() {
    // File I/O
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

void Fast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

// ============ MAIN SOLUTION ============

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    vector<int> ones;
    int total = 0;
    for (int i = 0; i < k; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            total++;
        }
    }
    sort(all(a));
    int final_ones = 0;
    int operation_convert = 0;
    for (int i = 0; i < k - 1; i++) {
        final_ones  += max(a[i], 1);
        operation_convert += a[i] - 1;
    }
    cout << operation_convert + final_ones << ln;
}

int main() {
    Fast();
    //Read(); // Command it When Submit in CodeForces
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
