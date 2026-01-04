#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void result() {
   int x,y;
   cin>>x>>y;
   if(x>y){
    cout<<y<<' '<<x<<endl;
   }
   else{
    cout<<x<<' '<<y<<endl;;
   }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  ll t;
  cin >> t;
  while (t--) result();
  return 0;
}