#include<bits/stdc++.h>
using namespace std;
#define MAX 205

list<int> :: iterator it;

bool IsBicolorable(list<int> graph[],int n)
{
	int color[n]={0};
	list<int> q;
	q.push_back(0);
	color[0]=1;
	while(!q.empty())
	{
		int node=q.front();
		q.pop_front();
		for(it=graph[node].begin();it!=graph[node].end();++it)
		{
			if(color[(*it)]==0)
			{
				if(color[node]==1)
				{
					color[(*it)]=2;
				}
				else
				{
					color[(*it)]=1;
				}
				q.push_back(*it);
			}
			if(color[node]==color[(*it)])
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,i,j,k,l,m,t,a,b;
	while(1)
	{
		cin>>n;
		if(n==0)
		{
			break;
		}
		list<int> graph[n];
		cin>>l;
		for(i=0;i<l;++i)
		{
			cin>>a>>b;
			graph[a].push_back(b);
			graph[b].push_back(a);
		}
		if(IsBicolorable(graph,n))
		{
			cout<<"BICOLORABLE."<<endl;
		}
		else
		{
			cout<<"NOT BICOLORABLE."<<endl;
		}
	}
	return 0;
}
