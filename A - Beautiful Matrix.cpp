//when 1 is at (2,2) then its called beautiful matrix.

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void result() {
    int matrix[5][5];
    int row, col;

    for(int i=0; i<5;i++){
        for (int j=0; j<5;j++){
            cin>>matrix[i][j];
            if(matrix[i][j]==1){
                row=i;
                col=j;
            }
        }
    }
    int moves = abs(2-row) + abs(2- col);
    cout<<moves<<endl;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  ll t = 1;
  while (t--) result();
  return 0;
}
