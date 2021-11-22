#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,t;
    cin>>t;
    string s;
    for(i=0;i<t;++i)
    {
        cin>>s;
        int sum=0,count=0,count2;
        int arr[4]={0};
        n=s.length();
        for(j=0;s[j]!='\0';++j)
        {
            if(s[j]>='A'&&s[j]<='Z')
            {
                k=j+1;
                count=0;
                //count2=0;
                while((s[k]>'Z'||s[k]<'A')&&k<n)
                {
                    count=count*10+(s[k]-'0');
                    k++;
                }
                if(count==0)
                {
                    count++;
                }
                if(s[j]=='C')
                {
                    arr[0]+=count;
                }
                else if(s[j]=='H')
                {
                    arr[1]+=count;
                }
                else if(s[j]=='O')
                {
                    arr[2]+=count;
                }
                else if(s[j]=='N')
                {
                    arr[3]+=count;
                }
            }
        }
        //cout<<"C: "<<arr[0]<<" H: "<<arr[1]<<" O: "<<arr[2]<<" N: "<<arr[3]<<endl;
        double sum_2=0;
        sum_2+=(arr[0]*12.01);
        sum_2+=(arr[1]*1.008);
        sum_2+=(arr[2]*16.00);
        sum_2+=(arr[3]*14.01);
        //cout<<sum_2<<endl;
        printf("%0.3lf\n",sum_2);
    }
    return 0;
}
