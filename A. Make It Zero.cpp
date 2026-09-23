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

  if (n % 2 == 0)
  {
    cout << 2 << "\n";
    cout << 1 << " " << n << "\n";
    cout << 1 << " " << n << "\n";
  }
  else
  {
    cout << 4 << "\n";
    cout << 1 << " " << n - 1 << "\n";
    cout << 1 << " " << n - 1 << "\n";
    cout << n - 1 << " " << n << "\n";
    cout << n - 1 << " " << n << "\n";
  }
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