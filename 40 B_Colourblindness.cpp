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
    string s1,s2;
    cin>>s1>>s2;

    forn(i,n){
        if(s1[i]==s2[i]){
            continue;
        }
        if(s1[i]=='R'|| s2[i]=='R'){
            cout<<"NO\n";
            return;
        }
    }  
    cout<<"YES\n";
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