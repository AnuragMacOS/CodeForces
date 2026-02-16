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
    int n;
    cin>>n;
    vll a(n);
    forn(i,n-1){
        cin>>a[i];
    }
    ll ans=0;
    for(int i=0;i<n;i++){
       ans = ans + a[i];
    }
    cout<< (-1) * ans <<endl;
    
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

/*
void solve() {
    int n;
    cin >> n;
    long long ans = 0;
    long long temp;

    // Improved loop: Run n-1 times
    // Optimization: We don't need a vector, just add to sum immediately
    for(int i = 0; i < n - 1; i++){
        cin >> temp;
        ans += temp;
    }

    // The missing number is the negative of the sum
    cout << -ans << endl;
}
    */