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
  vector<int> a(n);
  forn(i, n)
  {
    cin >> a[i];
  }
  map<int, int> mpp;

  forn(i, n)
  {
    mpp[a[i]]++;
  }

  if (mpp.size() >= 3) cout << "No\n";

  else{
    int count1 = mpp.begin()->second;
    int count2 = mpp.rbegin()->second;
    
    if(abs(count1 - count2) <= 1){
        cout<<"Yes\n";
    }
    else cout<<"No\n";
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