#include<bits/stdc++.h>
using namespace std;

int binary_s(int arr[],int left,int right,int val)
{
	int mid=(left+right)/2;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(arr[mid]==val)
		{
			return mid;
		}
		else if(arr[mid]>val)
		{
			right=mid-1;
		}
		else
		{
			left=mid+1;
		}
	}
	return mid;
}

int l_check(int arr[],int pos,int val)
{
	//here
	int c=0;
	while(arr[pos]==val&&pos>=0)
	{
		c=1;
		pos--;
	}
	if(c==1)
	{
		pos++;
	}
	return pos;
}

int r_check(int arr[],int pos,int val,int n)
{
	//here
	int c=0;
	while(arr[pos]==val&&pos<n)
	{
		c=1;
		pos++;
	}
	if(c==1)
	{
		pos--;
	}
	return pos;
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,i,q,j,k,m,t,pos,pos2;
	cin>>n;
	int arr[n];
	for(i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	cin>>q;
	for(i=0;i<q;++i)
	{
		cin>>k;
		pos=binary_s(arr,0,n-1,k);
		pos2=pos;
		//cout<<"pos: "<<pos<<endl;
		pos=l_check(arr,pos,k);
		//cout<<"Pos: "<<pos<<endl;
		pos2=r_check(arr,pos,k,n);
		int l,r;
		if(arr[pos]==k||arr[pos]>k)
		{
			if(pos-1>=0)
			{
				l=pos-1;
			}
			else
			{
				l=-1;
			}
		}
		else
		{
			l=pos;
		}
		if(arr[pos2]==k||arr[pos2]<k)
		{
			if(pos2+1<n)
			{
				r=pos2+1;
			}
			else
			{
				r=-1;
			}
		}
		else if(arr[pos2]>k)
		{
			r=pos2;
		}
		if(l==-1)
		{
			cout<<"X ";
		}
		else
		{
			cout<<arr[l]<<" ";
		}
		if(r==-1)
		{
			cout<<"X"<<endl;
		}
		else
		{
			cout<<arr[r]<<endl;
		}
	}
	return 0;
}
