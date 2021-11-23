#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,m,t,l,r;
    cin>>t;
    for(i=0;i<t;++i)
    {
        cin>>l;
        if(l%2==0)
        {
            l++;
        }
        cin>>r;
        if(r%2==0)
        {
            r--;
        }
        int sum,sum2,sum3;
        sum=(r*(r+1))/2;
        r=r-1;
        r/=2;
        sum2=(r*(r+1));
        sum-=sum2;
        l--;
        sum3=(l*(l+1))/2;
        l/=2;
        sum3-=(l*(l+1));
        sum-=sum3;
        cout<<"Case "<<i+1<<": "<<sum<<endl;
    }
    return 0;
}
