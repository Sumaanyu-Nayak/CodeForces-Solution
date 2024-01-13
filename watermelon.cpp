#include<bits/stdc++.h>
using namespace std;

string yn(int n)
{
    if(n%2==0 && n!=2)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<yn(n)<<endl;
}