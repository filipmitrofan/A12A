#include <iostream>

using namespace std;
int perechi(int n, int m)
{
    int r,k{};
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            while(j)
            {
                r=i%j;
                i=j;
                j=r;
            }
            if(i*j/i==m)
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
