Subiectul 1
1.a

2.a)27596

b)76,54,10,0

c)#include<iostream>

using namespace std;

int main()

{int x, n=0, y, c;

cin>>x;

while(x!=0)

{j=x;

c=0;

while(y>0)

{if(y%10>c)

c=y%10;

y=y/10;}

n=n*10+c;

cin>>x;}

cout<<n;

return 0;}
d.daca x!=0 repeta .....pana cand x=0

Subiectul 2
  1.b

2.c)

3.9 2

4.2,3,4,5,6
  Subiectul 3
  1.a

2)f(4063)=72

  3.
  #include <bits/stdc++.h>

using namespace std;
ifstream f("date.in");
int main()
{
    int fr[10]={0},n,x;
    f>>n;
    for(int i=1;i<=n;++i)
    {
        f>>x;
        fr[x]++;
    }
    for(int i=0;i<=9;++i)
        while(fr[i])
    {
        cout<<i<<" ";
        fr[i]--;
    }
    return 0;
}
4.
  #include <bits/stdc++.h>

using namespace std;
ifstream f("date.in");
int main()
{
    int n,x,k=0,sum,nr=0;

    while(f>>x)
    {
        sum=0;
        k++;
        if(k==6)
        {
            k=0;
            cout<<endl;
        }
        cout<<x<<" ";
        while(x)
        {
            sum+=x%10;
            x/=10;
        }
        if(sum%2==0)
            nr++;
    }
    cout<<endl<<nr;
    return 0;
}
