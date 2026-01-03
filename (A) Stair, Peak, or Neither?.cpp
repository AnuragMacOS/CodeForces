#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void result() {
   int a,b,c;
   cin>>a>>b>>c;
   if(a<b && b<c){
    cout<<"STAIR"<<endl;
   }
   else if(a<b && b>c){
    cout<<"PEAK"<<endl;
   }
   else{
    cout<<"NONE"<<endl;
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