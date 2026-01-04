#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void result() {
  int a,b,c;
  cin>>a>>b>>c;
  if(a==b){
    cout<<c<<endl;
  }
  else if (b==c){
    cout<<a<<endl;
  }
  else{
    cout<<b<<endl;
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