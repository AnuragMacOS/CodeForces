#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define forn(i,n)  for(int i=0;i<n;i++)

void solve() {
    ll s, k, m;
    cin >> s >> k >> m;
    if (s <=k) {
        cout <<max(0LL,s -(m % k))<<endl;
    }
     else{
        ll i= m/k;
        ll rem=m % k;
        
        if (i % 2 == 0) cout << s -rem <<endl;
        else cout << k-rem <<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}

