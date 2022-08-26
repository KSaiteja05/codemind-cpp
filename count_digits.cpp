#include<bits/stdc++.h>
using namespace std;
int cnt(int n)
{
    int c=0;
    if(n==0) return 1;
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    return c;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<cnt(a[i])<<" ";
    }
}