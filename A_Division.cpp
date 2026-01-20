#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back

void solve()
{
    int rating;
    cin >> rating;
    cout << "Division";

    if (rating >= 1900)
        cout << " 1\n";
    else if (rating >= 1600)
    {
        cout << " 2\n";
    }
    else if (rating >= 1400)
    {
        cout << " 3\n";
    }
    else
    {
        cout << " 4\n";
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