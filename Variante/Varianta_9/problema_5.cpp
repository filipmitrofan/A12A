#include<iostream>
using namespace std;
int main()
{
  int n,a[10][10],i,j;
cin>>n;
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
cin>>a[i][j];
for(i=1;i<=n;i++)
cout<<a[1][i]<<" ";
for(i=2;i<=n;i++)
cout<<a[i][n]<<" ";
for(i=n-1;i>=1;i--)
cout<<a[n][i]<<" ";
for(i=n-1;i>1;i--)
cout<<a[i][1]<<" ";
return 0;
}
