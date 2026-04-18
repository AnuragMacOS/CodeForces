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

vll round_numbers;

bool check(ll x)
{
  int digits = 0;
  int zeros = 0;

  while (x)
  {
    if (x % 10 == 0)
    {
      zeros++;
    }
    digits++;
    x /= 10;
  }

  if (zeros == digits - 1)
  {
    return true;
  }
  else
  {
    return false;
  }
}

void init()
{
  for (ll i = 1; i <= 999999; i++)
  {
    if (check(i))
    {
      round_numbers.pb(i);
    }
  }
}

void solve()
{
  ll n;
  cin >> n;

  ll ans = 0;

  for (int i = 0; i < round_numbers.size(); i++)
  {
    if (round_numbers[i] <= n)
    {
      ans++;
    }
    else
    {
      break;
    }
  }

  cout << ans << '\n';
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  init();

  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}