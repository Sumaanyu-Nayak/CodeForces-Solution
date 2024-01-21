#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char intial = s[0];
    if(isupper(intial)){
        cout<<s<<endl;
        return 0;
    }
    else{
        s[0] = toupper(s[0]);

    }
    cout<<s<<endl;
    return 0;
}