#include<bits/stdc++.h>
using namespace std;

string abbrS(string s)
{
    int n=s.length();
    if(n>=10)
    {
        string ans="";
        ans+=s[0];
        ans+=to_string(n-2);
        ans+=s[n-1];
        return ans;
    }
    else
    {
        return s;
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        cout<<abbrS(s)<<endl;
    }
}