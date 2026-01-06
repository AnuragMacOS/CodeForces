#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void result() {
   string s;
    cin>>s;
    int cnt1=0,cnt2=0;
    for(int i=0;i<s.length();i++){
      if(s[i]=='A'){
        cnt1++;
      }
      else cnt2++;
    }
    if(cnt1>cnt2){
      cout<<"A"<<endl;;
    }
    else cout<<"B"<<endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  ll t;
  cin >> t;
  while (t--) result();
  return 0;
}