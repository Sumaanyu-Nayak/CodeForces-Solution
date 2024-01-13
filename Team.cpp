#include<bits/stdc++.h>
using namespace std;

int team(int p, int v, int t){
    int sum = p + v + t;
    if(sum >= 2){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n;
    cin>>n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int p, v, t;
        cin>>p>>v>>t;
        sum += team(p, v, t);
    }
    cout<<sum<<endl;
}