#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,su=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int x,y;
	cin>>x>>y;
	for(int i=0;i<n;i++)
	{
		if(a[i]>=x && a[i]<=y)
		{
		    continue;
		}
		else
		{
		    su+=a[i];
		}
	}
	cout<<su;
}