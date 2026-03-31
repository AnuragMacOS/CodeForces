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
    int a, b, c;
    cin >> a >> b >> c;

    if (a + c > b + c)
    {
        cout << "First\n";
    }
    else if (a + c < b + c)
    {
        cout << "Second\n";
    }
    else
    {
        if (c % 2 != 0)
        {
            cout << "First\n";
        }
        else
        {
            cout << "Second\n";
        }
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