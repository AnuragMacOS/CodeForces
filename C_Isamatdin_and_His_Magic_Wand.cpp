#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long ll;

void result()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if ((a[i] % 2 ) != (a[0] % 2))
        {
            cnt++;
            break;
        }
    }
    if (cnt > 0)  sort(a.begin(), a.end());
    for(int i =0;i<n;i++) cout<<a[i]<<" ";
    cout<<"\n";
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