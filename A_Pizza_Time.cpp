#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long ll;

void result()
{
    ll n;
    cin >> n;
    ll totalEatenbyHao = 0;
    while (n >= 3)
    {
        ll haoAteToday = n / 3;
        totalEatenbyHao += haoAteToday;

        if (n % 3 == 0)
        {
            n = haoAteToday;
        }
        else if(n%3==1)
        {
            n = haoAteToday + 1;
        }
        else n= haoAteToday + 2;
    }
    cout<<totalEatenbyHao<<endl;
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