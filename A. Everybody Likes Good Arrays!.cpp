#define _Alignof alignof
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
  int n;
  cin >> n;
  ll a[n];
  forn(i, n)
  {
    cin >> a[i];
  }
  ll ops = 0;
  for (int i = 0; i < n - 1; i++)
  {
    
    if (a[i] % 2 == a[i + 1] % 2){
           ops++;
    }
  }
  cout<<ops<<endl;
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