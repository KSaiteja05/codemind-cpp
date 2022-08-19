#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cnt=0;
    cin>>n>>m;
    int a[n],b[m];
    int z=n+m;
    vector<int>c;
    bool a1[n];
    bool b1[m];
    bool c1[z];
    for(int i=0;i<n;i++)
    {
        a1[i]=false;
    }
    for(int i=0;i<m;i++)
    {
        b1[i]=false;
    }
    for(int i=0;i<z;i++)
    {
        c1[i]=false;
    }
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
        if(a1[i]==true)
        {
            continue;
        }
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a1[j]=true;
            }
        }
        c.push_back(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        if(b1[i]==true)
        {
            continue;
        }
        for(int j=0;j<m;j++)
        {
            if(b[i]==b[j])
            {
                b1[j]=true;
            }
        }
        c.push_back(b[i]);
    }
    for(int i=0;i<c.size();i++)
    {
        cnt=0;
        if(c1[i]==true)
        {
            continue;
        }
        for(int j=0;j<c.size();j++)
        {
            if(c[i]==c[j])
            {
                c1[j]=true;
                cnt++;
            }
        }
        if(cnt==2)
        {
            cout<<c[i]<<" ";
        }
    }
}