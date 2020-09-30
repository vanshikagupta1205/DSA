#include<iostream>
using namespace std;

int main()
{
    long int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;++i)
        cin>>a[i];
    for(i=0;i<n-1;++i)
    {
        for(j=0;j<n-i-1;++j)
        {
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }
    for(i=0;i<n;++i)
        cout<<a[i]<<endl;
    return 0;
}
