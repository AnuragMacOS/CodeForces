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

    forn(i, n - 1)
    {
        if (a[i + 1] < a[i])
        {
            cout << "0\n";
            return;
        }
    }
    int min_diff = INT_MAX;
    forn(i, n - 1)
    {
        int diff = a[i + 1] - a[i];
        min_diff = min(min_diff, diff);
    }
    int operations = (min_diff / 2) + 1;
    cout << operations << endl;
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