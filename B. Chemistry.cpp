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
  long long n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  vector<int> frequency_of_characters(26, 0);
  for (int i = 0; i < n; i++)
    frequency_of_characters[s[i] - 'a']++;

  long long odd_frequency = 0;
  for (int i = 0; i < 26; i++)
    odd_frequency += frequency_of_characters[i] % 2;

  if (odd_frequency > k + 1)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
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
