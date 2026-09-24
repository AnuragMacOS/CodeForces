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
  string s;
  cin >> s;

  int n = s.size();

  int count_of_0s = 0;
  int count_of_1s = 0;

  for (int i = 0; i < n; i++)
  {
    if (s[i] == '0')
      count_of_0s++;
    else
      count_of_1s++;
  }

  int length_of_t = 0;

  for (int i = 0; i < n; i++)
  {

    if (s[i] == '0' && count_of_1s > 0)
    {
      count_of_1s--;
      length_of_t++;
    }
    else if (s[i] == '1' && count_of_0s > 0)
    {
      count_of_0s--;
      length_of_t++;
    }
    else
    {
      break;
    }
  }

  // Characters we cannot keep have to be deleted
  cout << n - length_of_t << '\n';
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}