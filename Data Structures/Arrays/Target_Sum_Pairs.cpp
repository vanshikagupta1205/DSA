#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,target;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    cin>>target;
    sort(arr,arr+n);
    int s=0,e=n-1;
    int sum=0;
    while(s<e)
    {
        sum=arr[s]+arr[e];
        if(sum==target)
        {
            cout<<arr[s]<<" and "<<arr[e]<<endl;
            ++s;
            --e;
        }
        else if(sum<target)
        {
            ++s;
        }
        else
        {
            --e;
        }
    }
    return 0;
}