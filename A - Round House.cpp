#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
int main(){
    //ll t;
   // cin>>t;
   // while(t--)
   // {
      int n,a,b;
      cin>>n>>a>>b;
      int t=((a%n+b%n)+n)%n;
      if(t==0) t=n;
      cout<<t<<endl;
   // }
    return 0;
}
