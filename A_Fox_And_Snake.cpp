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
  
    int n , m;
    cin>>n>>m;
     
    for(int i =0; i < n;  i++){
        if(i % 2 ==0){
            for(int j=0; j<m; j++){
                cout<<"#";
            }
        }
        else{
            if(i % 4 ==1){
                for(int j=0;j< m-1; j++){
                    cout<< ".";
                }
                cout<<"#";
            }
            else{
                cout<<"#";
                for(int j=1;j< m; j++){
                    cout<< ".";
                }
            }
        }
        
        cout<<"\n";
    }
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    
    
    return 0;
}