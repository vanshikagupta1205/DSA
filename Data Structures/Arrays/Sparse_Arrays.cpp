#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string,int> freq;
    string s;
    int n,i,q;
    cin>>n;
    for(i=0;i<n;++i)
    {
        cin>>s;
        freq[s]+=1;
    }
    cin>>q;
    for(i=0;i<q;++i)
    {
        cin>>s;
        if(freq.find(s) == freq.end())
            cout<<"0\n";
        else
            cout<<freq[s]<<"\n";
    }
    return 0;
}