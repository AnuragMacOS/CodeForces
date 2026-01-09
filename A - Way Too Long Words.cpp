#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
  string s;
  cin>>s;
  int n=s.size();
  int cnt=0;
  if(n>10){
  for(int i=1;i<n-1;i++){
    cnt++;
  }
  cout<<s[0]<<cnt<<s[n-1]<<endl;
   }
  else {
  cout<<s<<endl;
}
}
 return 0;

}