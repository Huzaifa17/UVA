#include<bits/stdc++.h>
using namespace std;

long long int parent[100001];
long long int size[100001];
//long long int cost[100001];


void init(long long int n)
{
	for(int i=1;i<=n;++i)
	{
		parent[i]=i;
		size[i]=1;
	}
}

long long int find(long long int u)
{
	if(u==parent[u])
	{
		return u;
	}

	return parent[u]=find(parent[u]);
}

void Union(long long int u,long long int v)
{
	long long int p=find(u);
	long long int q=find(v);
	if(p!=q)
	{
		if(size[p]<size[q]&&size[p]>=0)
		{
			swap(p,q);
		}
		parent[q]=p;
		size[p]+=size[q];
	}
	return ;
}


int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	long long int n,i,j,k,m,t,x,y;
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>n;
		init(n);
		string s;
		char c;
		long long corr_ans=0,incorr_ans=0;
		getline(cin, s);
		 while(getline(cin, s), s!="")
		 {
		 	stringstream ss(s);
		 	ss>>c>>x>>y;
            if(c=='c')
            {
            	Union(x,y);
            }
            else
            {
            	if(find(x)==find(y))
            	{
            		corr_ans++;
            	}
            	else
            	{
            		incorr_ans++;
            	}
            }
         }
         if(i==0)
         {
         	cout<<corr_ans<<","<<incorr_ans<<endl;
         }
         else
         {
         	cout<<endl;
         	cout<<corr_ans<<","<<incorr_ans<<endl;
         }
	}
	return 0;
}
