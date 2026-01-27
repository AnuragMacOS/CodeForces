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
    string s;
    cin>>s;
    string target ="Timur";

    sort(all(s));
    sort(all(target));

    if(s==target){
        cout<<"YES\n";
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