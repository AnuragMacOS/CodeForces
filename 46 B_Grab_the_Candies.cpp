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
    int n;
    cin>>n;
    vi a(n);
    int m =0 ,b =0;
    for(int i =0;i<n;i++){
      cin>>a[i];
      if(a[i] % 2 == 0){
        m +=a[i];
      }
      else{
       b +=a[i];
      }
    } 
    if(m>b) cout<< "YES" <<endl;
    else  cout<< "NO" <<endl; 
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