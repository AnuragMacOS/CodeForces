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
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n)
    {
        cin >> a[i];
    }

    ll odd_count = 0;
    forn(i, n)
    {
        if (a[i] % 2 == 1)
        {
            odd_count++;
        }
    }
    if (odd_count % 2 != 0)
    {
        cout << "NO\n";
    }
    else
        cout << "YES\n";
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