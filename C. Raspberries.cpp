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
  ll n, k;
  cin >> n >> k;

  vll a(n);
  forn(i, n)
  {
    cin >> a[i];
  }

  ll ans = INT_MAX;
  ll even_count = 0;

  forn(i, n)
  {
    if (a[i] % 2 == 0)
      even_count++;
    if (a[i] % k == 0)
      ans = 0;
    ans = min(ans, k - (a[i] % k));
  }

  if (k == 4)
  {
    if (even_count >= 2)
      ans = min(ans, 0LL);
    else if (even_count == 1)
      ans = min(ans, 1LL);
    else if (even_count == 0)
      ans = min(ans, 2LL);
  }

  cout << ans << "\n";
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