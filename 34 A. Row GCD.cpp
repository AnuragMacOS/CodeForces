#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void solve() {
    int n, m;
    if (!(cin >> n >> m)) return;
    vll a(n);
    vll b(m);
    
    for (int i=0;i<n; i++) cin >> a[i];
    for (int i=0;i<m;i++) cin >> b[i];
    
    ll diff = 0;
    
    for (int i=1; i<n;i++) {
        diff = gcd(diff, abs(a[0] - a[i]));
    }

    for (int i=0; i <m; i++) {
        ll res = gcd(a[0] + b[i], diff);
        cout << res;
        if (i == m - 1) {
            cout << "\n";
        } else {
            cout << " ";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while (t--) {
        solve();
    }
    
    return 0;
}