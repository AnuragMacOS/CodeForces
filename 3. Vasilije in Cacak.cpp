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
  ll n, k, x;
  cin >> n >> k >> x;

  ll minimum_sum = (k * (k + 1)) / 2;
  ll maximum_sum = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;

  if (x >= minimum_sum && x <= maximum_sum)
    cout << "YES\n";
  else
    cout << "NO\n";
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