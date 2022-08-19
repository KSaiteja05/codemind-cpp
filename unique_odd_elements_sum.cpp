#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,cnt=0;
	cin>>n;
	int a[n];
	bool b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		b[i]=false;
	}
	for(int i=0;i<n;i++)
	{
		if(b[i]==true)
		{
			continue;
		}
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				b[j]=true;
			}
		}
		if(a[i]%2==1)
		{
		    cnt=cnt+a[i];
		}
	}
	cout<<cnt;
}