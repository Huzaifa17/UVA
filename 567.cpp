#include<bits/stdc++.h>
using namespace std;

void bfs(list<int> graph[],int source,int destination)
{
    int i,j,k,m,n;
    int level[21]={0};
    int visited[21]={0};
    list<int> q;
    list<int> :: iterator it;
    q.push_back(source);
    visited[source]=1;
    level[source]=0;
    while(!q.empty())
    {
        int node=q.front();
        q.pop_front();
        for(it=graph[node].begin();it!=graph[node].end();++it)
        {
            if(visited[(*it)]==0)
            {
                level[(*it)]=level[node]+1;
                visited[(*it)]=1;
                q.push_back(*it);
            }
        }
    }
    printf("%2d to %2d: %d\n",source,destination,level[destination]);
    return ;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output2.txt","w",stdout);
    int n,i,j,k,m,t=1;
    while(cin>>n)
    {
        list<int> graph[21];
        for(i=0;i<21;++i)
        {
            //cout<<"node "<<i<<" adj: "<<(*it)<<endl;
            graph[i].clear();
        }
        int val;
        //cout<<n<<endl;
        for(i=1;i<=n;++i)
        {
            //int val;
            cin>>val;
            graph[1].push_back(val);
            graph[val].push_back(1);
        }
        for(i=2;i<20;++i)
        {
            cin>>n;
            for(j=1;j<=n;++j)
            {
                cin>>val;
                graph[i].push_back(val);
                graph[val].push_back(i);
            }
        }
        cout<<"Test Set #"<<t<<endl;
        t++;
        cin>>k;
        int s,d;
        /*for(i=1;i<=20;++i)
        {
            list<int> :: iterator it;
            for(it=graph[i].begin();it!=graph[i].end();++it)
            {
                cout<<"node "<<i<<" adj: "<<(*it)<<endl;
            }
        }*/
        for(i=0;i<k;++i)
        {
            cin>>s>>d;
            bfs(graph,s,d);
        }
        //cout<<"HHH"<<endl;
        cout<<endl;
    }
    return 0;
}
