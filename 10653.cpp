#include<bits/stdc++.h>
using namespace std;
#define MAX 1001

int graph[MAX][MAX];
int level[MAX][MAX];
int visited[MAX][MAX];
int grid_x[]={1,-1,0,0};
int grid_y[]={0,0,1,-1};

int bfs(int n,int m,int source_x,int source_y,int des_x,int des_y)
{
	int i,j,k,val;
	list<pair<int,int>> q;
	for(i=0;i<n;++i)
	{
		for(j=0;j<m;++j)
		{
			//graph[i][j]=0;
			visited[i][j]=0;
			level[i][j]=0;
		}
		//cout<<endl;
	}
	//cout<<endl;
	q.push_back({source_x,source_y});
	level[source_x][source_y]=0;
	visited[source_x][source_y]=1;
	while(!q.empty())
	{
		//cout<<"H"<<endl;
		pair<int,int> node=q.front();
		q.pop_front();
		int first1=node.first;
		int second1=node.second;
		int first2,second2;
		//cout<<"x1: "<<first1<<" y1: "<<second1<<endl;
		//cout<<"dis1: "<<level[first1][second1]<<endl;
		for(i=0;i<4;++i)
		{
			first2=first1+grid_x[i];
			second2=second1+grid_y[i];
			//cout<<"x1: "<<first1<<" y1: "<<second1<<endl;
			//cout<<"grid_x: "<<grid_x[i]<<" grid_y: "<<grid_y[i]<<endl;
			//cout<<"x2: "<<first2<<" y2: "<<second2<<endl;
			if(first2<n&&first2>=0&&second2<m&&second2>=0&&graph[first2][second2]==0&&visited[first2][second2]==0)
			{
				q.push_back({first2,second2});
				level[first2][second2]=level[first1][second1]+1;
				visited[first2][second2]=1;
				//cout<<"x: "<<first2<<" y: "<<second2<<endl;
				//cout<<"dis: "<<level[first2][second2]<<endl;
				if(first2==des_x&&second2==des_y)
				{
					//cout<<"reached"<<endl;
					return level[first2][second2];
				}
			}
		}
	}
	return 0;
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output2.txt","w",stdout);
	int n,i,j,k,m,t,a,b,val,source_x,des_x,source_y,des_y;
	while(1)
	{
		cin>>n>>m;
		if(n==0&&m==0)
		{
			break;
		}
		//int graph[n][m];
		for(i=0;i<n;++i)
		{
			for(j=0;j<m;++j)
			{
				graph[i][j]=0;
			}
		}
		cin>>t;
		for(i=0;i<t;++i)
		{
			cin>>a>>b;
			for(j=0;j<b;++j)
			{
				cin>>val;
				graph[a][val]=1;
			}
		}
		cin>>source_x>>source_y;
		cin>>des_x>>des_y;
	    cout<<bfs(n,m,source_x,source_y,des_x,des_y)<<endl;
	}
	return 0;
}
