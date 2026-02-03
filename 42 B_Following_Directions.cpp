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
    int x=0,y=0;
    string s;
    cin>>s;

    for(int i =0;i<sz(s);i++){
     if(s[i]=='L') x=x-1;
     if(s[i]=='R') x=x+1;
     if(s[i]=='U') y=y+1;
     if(s[i]=='D') y=y-1;
     if(x==1 && y==1){
         cout<<"YES\n";
         return;
      }
    }
    cout<<"NO\n";       
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