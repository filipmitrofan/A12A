#include <iostream>

using namespace std;
void nPrime(int n,int &k,int p[])
{
    int i,r,a,b;
    for(i=1;i<n;i++)
    {
        a=i;
        b=n;
        while(b)
        {
            r=a%b;
            a=b;
            b=r;
        }
        if(a==1)
        {
            k++;
            p[k]=i;
        }
    }
}
int main()
{
    int p[101];
    nPrime(20,0,p[]);
    return 0;
}
