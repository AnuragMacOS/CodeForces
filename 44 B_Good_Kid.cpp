#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back

void solve() {
    int n ;
    cin>>n;
    vector<int> a(n);
    for(int i =0; i<n;i++){
        cin >> a[i];
    }
    sort(all(a));
    a[0]++;
    int mul = 1;
    for(int i =0;i<n;i++){
     mul = mul * a[i];
    }
    cout<<mul<<endl;
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