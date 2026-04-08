#define _Alignof alignof
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t = 1;
  cin >> t;
  while (t--)
  {
    int start_x, start_y, reach_x, reach_y;
    cin >> start_x >> start_y >> reach_x >> reach_y;

    if (reach_y < start_y)
    {
      cout << -1 << endl;
      continue;
    }
    int moves = reach_y - start_y;
    start_x += moves;

    if (start_x < reach_x)
    {
      cout << -1 << endl;
      continue;
    }
    moves += (start_x - reach_x);
    cout << moves << endl;
  }

  return 0;
}