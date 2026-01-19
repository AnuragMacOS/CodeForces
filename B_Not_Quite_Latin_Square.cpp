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
    map<char, int> m;
    char c;

    for(int i =0; i<9;i++){
        cin>>c;
        m[c]++;
    }
    if(m['A']<3) cout<<"A"<<endl;
    else if(m['B']<3) cout<<"B"<<endl;
    else cout<<"C"<<endl;
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