#include<bits/stdc++.h>
using namespace std;
int main()
{
    // elephant of codeforces
    int n;
    cin>>n;
    int count=0;
    while(n>0)
    {
        if(n>=5)
        {
            n=n-5;
            count++;
        }
        else if(n>=4)
        {
            n=n-4;
            count++;
        }
        else if(n>=3)
        {
            n=n-3;
            count++;
        }
        else if(n>=2)
        {
            n=n-2;
            count++;
        }
        else if(n>=1)
        {
            n=n-1;
            count++;
        }
    }
    cout<<count<<endl;
}