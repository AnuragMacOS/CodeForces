#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long ll;

void result()
{
  int a,b,c,d;
  cin >> a >> b >> c >> d;

  if(a==b && b==c && c==d){
    cout<<"YES"<<endl;
  }
  else cout<<"NO"<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        result();
    }
    return 0;
}