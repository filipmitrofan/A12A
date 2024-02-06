#include <bits/stdc++.h>

using namespace std;
ifstream fin("nr.txt");
int main()
{
    int y,i,a[100],k=0,j;
    i=0;
    while (fin>>y)
    {
        k++;
        a[i]=y;
        i++;
    }
    for(i=0;i<k-1;i++)
    for(j=i+1; j<k; j++)
        if(a[i]>a[j])
            swap(a[i],a[j]);

    for(i=0; i<k; i++)
        if(a[i]>99 && a[i]<1000)
        cout<<a[i]<<" ";
    return 0;


}


