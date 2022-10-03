#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,cnt;
	float s=0,c=0;
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
		cnt=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				b[j]=true;
				cnt++;
			}
		}
		if(a[i]==cnt)
		{
		    s+=a[i];
		    c++;
		}
	}
	if(s==0 and c==0)
	{
	    cout<<-1;
	}
	else
	{
	    cout<<fixed<<setprecision(2)<<s/c;
	}
}