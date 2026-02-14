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
    ll n;
    cin>>n;
    vll a(n);
    forn(i,n) cin>>a[i];

    ll min = LLONG_MAX;
    for(ll num =0;num<n;num++){
        ll curr = abs(a[num]);
        if(curr<min){
            min=curr;
        }
    }
    cout<<min<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
        solve();
   
    
    return 0;
}