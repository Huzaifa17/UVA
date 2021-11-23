#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,m=0,t;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        m++;
        int arr[n],sum=0;
        for(i=0;i<n;++i)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        sum=(sum/n);
        k=0;
        for(i=0;i<n;++i)
        {
            if(arr[i]>sum)
            {
                k+=(arr[i]-sum);
            }
        }
        /*if(m!=1)
        {
            cout<<endl;
        }
        */
        cout << "Set #" << m<< endl;
        cout << "The minimum number of moves is " << k << "." << endl<<endl;
    }
    return 0;
}
