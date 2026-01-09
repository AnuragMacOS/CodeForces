#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long ll;

void result()
{
   int n;
   cin>>n;
   if(n % 2 != 0){
    cout<< 0<<endl;
   }
   else cout<<((n/4) +1) <<endl;
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