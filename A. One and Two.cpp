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

  int NumOfTwos = 0;
  forn(i, n)
  {
    if (a[i] == 2)
    {
      NumOfTwos++;
    }
  }

  if (NumOfTwos % 2 == 1) // if odd cha vane
  {
    cout << -1 << "\n";
    return;
  }
  
  if (NumOfTwos == 0) // zero
  {
    cout << 1 << "\n";
    return;
  }

  int HalfofTwos = 0;
  if (NumOfTwos > 0 && NumOfTwos % 2 == 0)
  { // even
    HalfofTwos = NumOfTwos / 2;
    int target = 0;

    for (int i = 0; i < n; i++)
    {
      if (a[i] == 2)
      {
        target++;
        if (target == HalfofTwos)
        {
          cout << i + 1 << "\n"; // cuz  i is 0-based, k is 1-based!
          return;
        }
      }
    }
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