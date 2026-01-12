#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long ll;

void result()
{
    int n;
    string s, t;
    cin >> n >> s >> t;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if (s == t)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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