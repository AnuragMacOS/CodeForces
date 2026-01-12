#include<iostream>
using namespace std;
void solve(){
    string str;
    cin>>str;

    int n = str.length();
    for (int i = 0; i < n ; i++)
    {
       if(str[i] == str[i+1]){
        cout<<1<<endl;
        return;
       }
    }
    cout<<n<<endl;
}

int main()
{
    int t; cin>>t;

    while(t--) solve();
  return 0;
}