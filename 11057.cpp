#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,i,j,k,m,t;
	while(cin>>n)
	{
		int arr[n];
		for(i=0;i<n;++i)
		{
			cin>>arr[i];
		}
		cin>>m;
		sort(arr,arr+n);
		int low=0,high=n-1,diff=1000000005,max,min;
		while(low<high)
		{
			if(arr[low]+arr[high]==m)
			{
				if((arr[high]-arr[low])<diff)
				{
					diff=arr[high]-arr[low];
					min=arr[low];
					max=arr[high];
				}
				low++;
				high--;
			}
			else if((arr[low]+arr[high])>m)
			{
				high--;
			}
			else
			{
				low++;
			}
		}
		cout<<"Peter should buy books whose prices are "<<min<<" and "<<max<<"."<<endl;
		cout<<endl;
	}
	return 0;
}
