#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void result() {
    ll n;
    cin >> n;
    ll x=0;
    string statement;

    for(ll i=0; i<n; i++){
        cin>>statement;
        if(statement[1]=='+') x++;
        else x--;
    }
    cout<< x <<'\n';
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  ll t = 1;
  while (t--) result();
  return 0;
}


