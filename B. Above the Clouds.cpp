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
  string s;
  cin >> s;

  for (int i = 1; i < sz(s) - 1; i++)
  {
    string temp = s.substr(0, i) + s.substr(i + 1, n);
    if (temp.find(s[i]) != string::npos)
    {
      cout << "Yes\n";
      return;
    }
  }
  cout << "No\n";
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