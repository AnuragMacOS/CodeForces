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
    string s = "codeforces";
    char c;
    cin>>c;
    for(int i =0;i< sz(s);i++){
        if(s[i]==c){
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