#include <bits/stdc++.h>
using namespace std;
 bool u[int(2e5+9)];
int main()
{
   int n,one=0,two=0,three=0,four=0,res;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       if(a[i]==1)
        one++;
       else if(a[i]==2) two++;
       else if (a[i]==3) three++;
       else four++;
   }
   res=four+three;
   if(one>three)
   {
       one=one-three;
   }
   else
    one=0;
    res+=one/4;
    one%=4;
    res+=two/2;
    two%=2;
    if(one==0)
    {
        res+=two;
    }
    else
    {
        if(one==1||one==2)
        {
            res++;
        }
        else
        {
            if(two==1)
            {
                res+=2;
            }
            else
                res++;
        }
    }
    cout<<res<<endl;
   return 0;
}
