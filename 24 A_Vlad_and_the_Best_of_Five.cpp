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
    string t;
    cin>>t;
    int x=0,y=0;
    for(int i =0;i<=4;i++){
        if(t[i]=='A') x=x+1;
        else if(t[i]=='B') y=y+1;
    }
    if(x>y){
      cout<< "A"<<"\n";
     }
    else cout<<"B"<< "\n";
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