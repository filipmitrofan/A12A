#include <iostream>

using namespace std;
int perechi(int n, int m)
{
    int r,k{},a,b;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            while(b)
            {
                r=a%b;
                a=b;
                b=r;
            }
            if(i*j/a==m)
                k++;
        }
    }
    return k;
}
int main()
{
    cout<<perechi(6,6);
    return 0;
}
