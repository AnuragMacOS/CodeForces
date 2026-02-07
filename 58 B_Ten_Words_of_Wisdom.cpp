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
    int winner = -1 , bestscore= 0;
    for(int i =1;i <= n;i++){
        int a,b;
        cin>>a>>b;

        if(b>bestscore && a<=10){
            winner =i;
            bestscore = b;
        }
    }
    cout<<winner<<endl;
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