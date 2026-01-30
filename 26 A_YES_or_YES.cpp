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
    string s;
    cin>>s;

    if(s[0]=='y' || s[0]=='Y'){
        if(s[1]=='e' || s[1]=='E'){
            if(s[2]=='s' || s[2]=='S'){
                cout<<"YES"<<endl;
            }
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }
    else cout<<"NO\n";
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