#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,m,t;
    while(cin>>n)
    {
        int arr[n],diff[n]={0};
        for(i=0;i<n;++i)
        {
            cin>>arr[i];
        }
        for(i=1;i<n;++i)
        {
            k=abs(arr[i]-arr[i-1]);
            diff[k]++;
        }
        /*for(i=1;i<n;++i)
        {
            cout<<diff[i]<<endl;
        }
        */
        k=0;
        for(i=1;i<n;++i)
        {
            if(diff[i]==0)
            {
                k=1;
                break;
            }
        }
        if(k==0)
        {
            cout<<"Jolly"<<endl;
        }
        else
        {
            cout<<"Not jolly"<<endl;
        }
    }
    return 0;
}
