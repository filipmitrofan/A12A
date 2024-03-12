Subiectul 1

1.d

2.
a)17396
    
b)3 2 1 0
    
c)
#include <iostream>

using namespace std;

int main()
{
    unsigned int x;
    cin>>x;
    int y;
    y=0;
    while(x!=0)
    {
        while(x>9)
        {
            x/=10;
        }
        y=y*10+x;
        cin>>x;
    }
    cout<<y;
    return 0;
}

d)
daca x!=0 atunci repeta.....pana cand(x=0)
daca x>9 atunci repeta.....pana cand(x<=9)

Subiectul 2

1.b

3.8-radacina; 2,3,4,5,6-descendenţii nodului 7

4.11 *nf*rm*t*c*

5.a[i][j]=(i*j)%10;

Subiectul 3
1.c

2.2+2+2+3,2+2+5,2+7

3.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
ifstream fin1("fin1.txt");
ifstream fin2("fin2.txt");
int main()
{
    int x,y,i,x1[101],vf[101]={0},j,n=0;
    i=0;
    while(fin1>>x)
    {
        if(x%5==0)
        {
            x1[i]=x;
            i++;
            n++;
        }
    }
    while(fin2>>y)
    {
        if(y%5==0)
        {
            x1[i]=y;
            i++;
            n++;
        }
    }
    for(i=0; i<=n; i++)
    {
        vf[x1[i]]++;
    }
    cout<<endl;

    for(i=1; i<=61; i++)
    {
        if(vf[i]==1 && i!=0)
            cout<<i<<" ";
    }

    return 0;
}

4.
