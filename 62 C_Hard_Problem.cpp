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
  
    int m,a,b,c;
    cin>>m>>a>>b>>c;
    int ans=0, rem=0;

    ans+= min(m,a);
    rem+= m - min(m,a);
    
    ans+= min(m,b);
    rem+= m - min(m,b);

    ans += min(rem,c);

    cout<<ans<<"\n";
    

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