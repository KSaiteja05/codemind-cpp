#include<bits/stdc++.h>
using namespace std;
bool ispalin(int n)
{
    int m=0,s=0,x;
    x=n;
    while(n!=0)
    {
        m=n%10;
        s=s*10+m;
        n=n/10;
    }
    if(x==s) return true;
    else return false;
}
int main()
{
    int n,cnt=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(ispalin(a[i])==true)
        {
            cnt++;
        }
    }
    cout<<cnt;
}