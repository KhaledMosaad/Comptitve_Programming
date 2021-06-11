#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,x,odd=0,even=0;
       cin>>n>>x;
       vector<int > v(n);
       for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==0) even++;
            else odd++;
       }
       if(x==n)
       {
            if(odd%2==0)
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }
       }
       else
       {
           if(even==n||(x%2==0&&odd==n))
           {
               cout<<"No"<<endl;
           }
           else cout<<"Yes"<<endl;
       }
 
   }
  return 0;
}
