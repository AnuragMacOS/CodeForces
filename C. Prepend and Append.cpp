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

  string s;
  cin>>s;
  int first = 0;
  int last = n - 1;
  int length = 0;

  while(first < last && s[first] != s[last]){
     first++;
     last--;
  }
  if(s[first]==s[last]){
     length = last - first + 1;
     cout<<length<<endl;
  }
  else if (first>last){
    cout<<0<<endl;
  }
  // or instead of the if else ,just write ---> [cout << max(0, last - first + 1) << "\n";] ,It'll work for all case
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