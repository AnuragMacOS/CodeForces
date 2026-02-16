#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define forn(i, n) for (int i = 0; i < n; i++)

void solve()
{
    ll n;
    cin >> n;

    vll b(n), a;
    for (ll i = 0; i < n; i++) cin >> b[i];
    
    a.push_back(b[0]);

    for (ll i = 1; i < n; i++)
    {
        if(b[i-1]<=b[i]){
            a.push_back(b[i]);
        }
        else{
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
    }
    cout<< a.size() <<endl;
    for( auto &it : a){
        cout<<it<<" ";
    }
    cout<<endl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}