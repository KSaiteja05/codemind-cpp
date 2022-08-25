#include<bits/stdc++.h>
using namespace std;
int indig(int n)
{
    int f=0;
    while(n!=0)
    {
        int m;
        m=n%10;
        f=f+m;
        n=n/10;
    }
    return f;
}
int main()
{
    int n,s=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        s=s+indig(a[i]);
    }
    cout<<s;
}