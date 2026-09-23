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
#define forn(i,n)  for(int i=0;i<n;i++)

int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

void solve() {
  long long a, b;
  cin >> a >> b;
  long long x_king, y_king;
  cin >> x_king >> y_king;
  long long x_queen, y_queen;
  cin >> x_queen >> y_queen;

  set<pair<int, int>> king_hits, queen_hits;

  for (int j = 0; j < 4; j++)
  {
    king_hits.insert({x_king + dx[j] * a, y_king + dy[j] * b});
    king_hits.insert({x_king + dx[j] * b, y_king + dy[j] * a});

    queen_hits.insert({x_queen + dx[j] * a, y_queen + dy[j] * b});
    queen_hits.insert({x_queen + dx[j] * b, y_queen + dy[j] * a});
  }
  int ans = 0;

  for (auto position : king_hits)
    if (queen_hits.find(position) != queen_hits.end())
      ans++;

  cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
    
 