#define _Alignof alignof
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
    
    int n,a,b;
    cin>>n>>a>>b;
    
    if(a==n && b==n){
      cout<<"Yes\n";
      return;
    }

    if(n-(a+b)>=2 || a==n && b==n){
      cout<<"Yes\n";
    }
    else cout<<"No\n";

    /*  or just say
    
    if (n - (a + b) >= 2 || a == n && b == n)
    {
      cout << "Yes\n";
    }
    else
      cout << "No\n";
   */
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