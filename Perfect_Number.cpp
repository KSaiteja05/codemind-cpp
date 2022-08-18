#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,res=0;
    cin>>a;
    for(int i=1;i<=(a/2);i++)
    {
        if(a%i==0)
        {
            res=res+i;
        }
        
    }
    if(res==a)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}