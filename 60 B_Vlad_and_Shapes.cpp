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
    bool isTri = false;
    for(int i =0; i < n ; i++){
        string row;
        cin>>row;
        int count = 0;
        for(int j =0; j < n ; j++){
          if(row[j]=='1'){
            count++;
          }
        }
        if(count==1){
             isTri = true;
          }  
    }
    if(isTri){
        cout<<"TRIANGLE"<<endl;
    }
    else cout<<"SQUARE"<<endl;  
    
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