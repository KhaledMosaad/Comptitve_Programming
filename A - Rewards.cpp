#include <bits/stdc++.h>
using namespace std;
int main()
{
   double a1,a2,a3,b1,b2,b3,n;
   cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
   double cups=ceil((a1+a2+a3)/5);
   double med=ceil((b1+b2+b3)/10);
   if(cups+med<=n)
   {
       cout<<"YES"<<endl;
   }
   else cout<<"NO"<<endl;
   return 0;
}
