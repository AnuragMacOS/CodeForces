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
    cin >> s;

    for(int i = 0; i< sz(s);i++){
        if(s[i]=='p'){
             s[i] = 'q';
        } 
        else if(s[i]=='q') s[i]= 'p';
    }
    reverse(all(s));
    cout<<s<<endl;
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