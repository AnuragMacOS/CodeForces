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
    int n,x;
    cin>>n>>x;

    vector<int>a(n);
    forn(i,n){
        cin>>a[i];
    }
    int ans= a[0];

    for(int i =1;i<n;i++){
        ans = max(ans, a[i] - a[i-1]); 
    }
    
    ans= max(ans,(2 * (x - a[n-1])));
    
    cout<< ans<<"\n";

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