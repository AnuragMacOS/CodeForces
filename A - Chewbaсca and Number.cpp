#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void result() {
    string x;
    cin>>x;

    for(int i=0; i<x.size();i++){
        int digit=x[i]-'0';
        int inverted=9-digit;
        if(i==0 && digit==9) continue;

        if(inverted < digit){
         x[i]= (char) (inverted + '0');
        }
    }
    cout<< x << endl;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  ll t = 1;
  while (t--) result();
  return 0;
}
