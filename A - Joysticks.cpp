#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
 
int main(){
    //ll t;
    //cin>>t;
    //while(t--)
    //{
        ll a1,a2,t=0;
        cin>>a1>>a2;
        if(a1==1&&a2==1)
            cout<<0<<endl;
        else{
        while(a1>0&&a2>0)
        {
            if(a1<a2)
                swap(a1,a2);
            a1-=2;
            a2++;
            t++;
        }
        cout<<t<<endl;
        }
 
    //}
    return 0;
}
