#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long int 

int main()
{
    ll n;
    cin>>n;
    vector<ll> values;
    for(ll i=0;i<n;++i)
    {
        ll x;
        cin>>x;
        values.push_back(x);
    }
    sort(values.begin(),values.end());
    ll key; // Element to be searched
    cin>>key;
    ll start=0,end=n-1;
    ll mid;
	ll flag=0;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(values[mid]==key)
        {
            cout<<mid<<endl;
			flag=1;
            break;
        }
        else if(values[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
	if(flag==0)
		cout<<"-1"<<endl;
    return 0;
}