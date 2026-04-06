#define _Alignof alignof
#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int x, k;
  cin >> x >> k;

  // Case 1: We can reach x in one jump
  if (x % k != 0)
  {
    cout << 1 << "\n";
    cout << x << "\n";
  }
  // Case 2: We need two jumps
  else
  {
    cout << 2 << "\n";
    // x is divisible by k, so x-1 and 1 are definitely NOT divisible by k
    cout << x - 1 << " " << 1 << "\n";
  }
}

int main()
{
  // Fast I/O
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