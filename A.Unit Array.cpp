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
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int pos1 = 0;
    int neg1 = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 1)
            pos1++;
        else
            neg1++;
    }
    ll ops = 0;
    while (pos1 < neg1 || neg1 % 2 == 1)
    {
        pos1++;
        neg1--;
        ops++;
    }
    cout << ops << endl;
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