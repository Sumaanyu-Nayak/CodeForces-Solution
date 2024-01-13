#include<bits/stdc++.h>
using namespace std;

int nextRound(int n, int k, int a[])
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=a[k-1] && a[i]>0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a[i]=x;
    }
    cout<<nextRound(n,k,a)<<endl;
}