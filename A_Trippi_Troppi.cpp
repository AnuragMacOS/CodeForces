#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long ll;

void result() {
    string a, b, c;
    cin >> a >> b >> c; 
    string res;         
    res.push_back(a[0]);
    res.push_back(b[0]);
    res.push_back(c[0]);
    cout << res << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        result();
    }
    return 0;
}
