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

    int a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];

    int cnt =0;
    for(int i =1;i<4;i++){
        if(a[0]<a[i]){
            cnt++;
        }
    }
    cout<<cnt<<"\n";
    
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
