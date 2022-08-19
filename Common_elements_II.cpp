#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cnt;
    cin>>n>>m;
    int a[n],b[m];
    int z=n+m;
    vector<int>c;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        c.push_back(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        c.push_back(b[i]);
    }
    for(int i=0;i<c.size();i++)
    {
        cnt=0;
        for(int j=0;j<c.size();j++)
        {
            if(c[i]==c[j])
            {
                cnt++;
            }
        }
        if(cnt==1)
        {
            cout<<c[i]<<" ";
        }
    }
}