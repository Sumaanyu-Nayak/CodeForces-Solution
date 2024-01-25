#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
    int count1=0,count2=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            count1++;
        }
        else if(s[i]>=97 && s[i]<=122)
        {
            count2++;
        }
    }
    if(count1>count2)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=97 && s[i]<=122)
            {
                s[i]=s[i]-32;
            }
        }
        cout<<s<<endl;
    }
    else if(count1<count2)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                s[i]=s[i]+32;
            }
        }
        cout<<s<<endl;
    }
    else if(count1==count2)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=65 && s[i]<=96)
            {
                s[i]=s[i]+32;
            }
        }
        cout<<s<<endl;
    }
}