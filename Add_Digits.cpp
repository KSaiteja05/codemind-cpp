#include<bits/stdc++.h>
using namespace std;
int add(int n)
{
    int sum=0,r;
    while(n>0 || sum>9)
    {
        if(n==0)
        {
            n=sum;
            sum=0;
        }
        r=n%10;
        sum+=r;
        n/=10;
    }
    return sum;
}    
int main()
{
    int n;
    cin>>n;
    cout<<add(n);
}