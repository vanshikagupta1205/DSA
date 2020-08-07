#include<iostream>
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    int mat[r][c];
    for(int i=0;i<r;++i)
    {
        for(int j=0;j<c;++j)
            cin>>mat[i][j];
    }
    //Printing in Wave Form
    for(int i=0;i<c;++i)
    {
        if(i%2==0)
        {
            for(int j=0;j<r;++j)
            {
                cout<<mat[j][i]<<", ";
            }
        }
        else
        {
            for(int j=r-1;j>=0;--j)
            {
                cout<<mat[j][i]<<", ";
            }
        }
    }
    cout<<"END"<<endl;
    return 0;
}