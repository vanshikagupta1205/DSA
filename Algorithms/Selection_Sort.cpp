#include<iostream>
using namespace std;

int main()
{
    long int n,i,j,min;
    cin>>n;
    int a[n];
    for(i=0;i<n;++i)
        cin>>a[i];
    for(i=0;i<n-1;++i)
    {
        min=i;
        for(j=i;j<n;++j)
        {
            if(a[j]<a[min])
                min=j;
        }
        swap(a[min],a[i]);
    }
    for(i=0;i<n;++i)
        cout<<a[i]<<endl;
    return 0;
}
