#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
    ll n;
    cin>>n;
    ll x;
    ll maxv=INT_MIN;
    while(n--)
    {
        cin>>x;
        maxv=max(maxv,x);
    }
    cout<<maxv<<endl;
    return 0;
}