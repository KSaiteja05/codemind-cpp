#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,cnt,min=100,max=0;
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
		    if(a[i]<min)
    	    {
    	        min=a[i];
    	    }
    	    if(a[i]>max)
    	    {
    	        max=a[i];
    	    }
		}
	}
	if(min==0 or max==0)
	{
	    cout<<-1;
	}
	else
	{
	    cout<<min<<" "<<max;
	}
}