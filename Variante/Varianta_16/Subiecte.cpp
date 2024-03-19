Subiectul 1
1.a
2.a)****#***
  b)11
  c)
d)
Subiectul 2
1.b
2.a
4.clasa aXIIa A,CLASA AXII A A
5.#include <iostream>

using namespace std;

int main()
{
    int i,j,n,a[100][100];
    cin>>n;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(i==j || i+j==n-1)
                a[i][j]=0;
            else if(i<j && i+j<n-1)
                a[i][j]=1;
            else if(i>j && i+j>n-1)
                a[i][j]=2;
            else a[i][j]=3;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            cout<<a[i][j]<<" ";
            cout<<endl;
    }


return 0;
}

Subiectul 3
  1.d
  2.77773,77775,77777
  3.int multiplu(int a[], int n, unsigned k)
{
    int nr=0;
    for(int i=1;i<=n;i++)
        if(a[i]%k==0 && a[i]%10==k)
            nr++;
    return nr;
}
4.#include <bits/stdc++.h>

using namespace std;

ifstream f("date.in");

int main()
{
    int fr[10]={0},n,x;
    while(f>>x)
    {
        while(x)
        {
            fr[x%10]++;
            x/=10;
        }
    }
    for(int i=9;i>=0;i--)
        while(fr[i])
    {
        cout<<i;
        fr[i]--;
    }
    return 0;
}
