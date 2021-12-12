#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,i,j,k,m,t;
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>n;
		int arr[n];
		int max;
		cin>>k;
		max=k;
		arr[0]=k;
		for(j=1;j<n;++j)
		{
			cin>>m;
			arr[j]=m-k;
			k=m;
			if(arr[j]<0)
			{
				arr[j]*=(-1);
			}
			//cout<<"In: "<<arr[j]<<endl;
			if(arr[j]>max)
			{
				max=arr[j];
			}
		}
		k=max;
		//cout<<max<<endl;
		/*for(j=0;j<n;++j)
		{
			cout<<arr[j]<<endl;
		}*/
		for(j=0;j<n;++j)
		{
			if(arr[j]==k)
			{
				k--;
				if(k<0)
				{
					max++;
					break;
				}
			}
			else if(arr[j]>k)
			{
				max++;
				break;
			}
		}
		cout<<"Case "<<i+1<<": "<<max<<endl;
	}
	return 0;
}
