#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void result() {
   int x,y,z;
   cin >> x >> y >> z;

   int min_distance = min(x , min(y,z));
   int max_distance = max(x , max(y,z));

   int optimal = max_distance - min_distance;
   cout<< optimal << endl;

}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  ll t = 1;
  while (t--) result();
  return 0;
}

/*
      OR we can by:
      int first = abs(x-y) + abs(x-z);
      int second = abs(y-x) + abs(y-z);
      int third = abs(z-x) + abs(z-y);
      
      int optimal = min(first, min(second, third));
      cout<< optimal <<endl;
   */ 


