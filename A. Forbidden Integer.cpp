#define _Alignof alignof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define forn(i, n) for (int i = 0; i < n; i++)

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    
    if(x == 1){
        if (k == 1) cout << "NO\n";
        else if (k == 2 && n%2 != 0) cout << "NO\n";
        else{

            cout<<"YES\n";

            //even case
            if ( n % 2 == 0)
            {
                cout<< n/2 <<"\n";
                for(int i = 1; i <= n/2; i++)
                {
                    cout << "2" << " ";
                }
                cout << "\n";
            }
            else { //odd case
                cout << n / 2 << "\n"; 
                cout << 3 << " ";
                for (int i = 0; i < (n / 2) - 1; i++)
                {
                    cout << 2 << " ";
                }
                cout << "\n";
            }
        }
    }
    else{
        cout<< "YES\n"; 
        cout<< n << "\n";
        for(int i = 1; i<=n; i++){
            cout<<"1"<<" ";
        }
        cout<< "\n";

    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}