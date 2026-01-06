#include<iostream>
using namespace std;
int main()
{
  int tc;
  cin>>tc;
  while(tc--){
    string noun;
    cin>>noun;
    int leng=noun.length();
    for(int i=0;i<leng-2;i++){
      cout<<noun[i];
    }
    cout<<"i"<<endl;
    
  }
  return 0;
}