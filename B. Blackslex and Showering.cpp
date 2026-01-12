#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long ll;

void result()
{
   int n;
   cin>>n;
   vector<int> arr(n); // a b c d e
   for(int i =0 ; i<n;i++){
    cin>>arr[i];
   }
   long long s = 0;
   for(int i =0;i<n-1;i++){
    s += abs(arr[i] - arr[i+1]);
   }
   long long ans = s;

   ans = min(ans , s - abs(arr[0]-arr[1])); // s - (a-->b)

   ans = min(ans , s - abs(arr[n-2]-arr[n-1])); //s - (d-->e)

   for(int i = 1 ;i < n-1 ; i++){ // 1st and last removed
      long long temp = s;
      temp -= abs(arr[i-1]-arr[i]); //b-->c
      temp -= abs(arr[i]-arr[i+1]); //c-->d

      temp += abs(arr[i-1] - arr[i+1]); //b-->d

      ans = min(ans,temp);
   }
   cout<<ans<<endl;

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