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
    ll x;
    cin >> x;
    int count=0;

    for(ll curr = x; curr <= x+100; curr++){
         ll temp = curr;
         int sum=0;

         while(temp>0){
            sum += temp%10;
            temp = temp/10;
         }
         if(curr-sum==x){
            count++;
         }
    }
    cout<<count<<endl;
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