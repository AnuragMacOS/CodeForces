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
  ll n;
  cin >> n;
  vll a(n);
  forn(i, n)
  {
    cin >> a[i];
  }
  int flag = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (__gcd(a[i], a[j]) <= 2)
      {
        flag = 1;
      }
    }
  }
  if (flag == 1) cout << "YES\n";

  else cout << "NO\n";
  
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