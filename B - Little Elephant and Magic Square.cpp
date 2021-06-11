#include <bits/stdc++.h>
using namespace std;
const int N=10e5;
int main()
{
    int a1,a2,a3,a4,a5,a6,a7,a8,a9;
    cin>>a1>>a2>>a3>>a4>>a5>>a6>>a7>>a8>>a9;
    int mx=max(a2+a3,max(a2+a8,a3+a6));
    for(int i=mx+1;i<=N;i++)
    {
        a1=i-a2-a3;
        a5=i-a2-a8;
        a9=i-a3-a6;
        if(a1<=0||a5<=0||a9<=0) continue;
        if(a1+a5+a9==i) break;
    }
    cout<<a1<<" "<<a2<<" "<<a3<<endl<<a4<<" "<<a5<<" "<<a6<<endl<<a7<<" "<<a8<<" "<<a9 ;
 
    return 0;
}
