#include <iostream>

using namespace std;

int main()
{
    int a[100][100],i,j,n,p,k=0;
    cin>>n>>p;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=p; j++)
        {
            a[i][j]=k*k;
            k+=2;
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=p; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
