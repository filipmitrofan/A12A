Subiectul 1
1.d;
2 a)4
  b)#include <iostream>

using namespace std;

int main()
{
    int a,n,i;
    cin>>a>>n;
    for(i=1;i<=n;i++)
        if(i%2==0)
        a=a-i*i;
        else a=a+i*i;
    cout<<a;
    return 0;
}

  c)4
  d)a=0;
Subiectul 2
2.d
3.9bemeut
4.2 ;5,7,8;
5.#include <iostream>

using namespace std;

int main()
{
    int i=1,j=1,a[100][100],n,c,aux;
    n=6;
    c=234567;
    aux=c%10;
    c=c/10;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==j)
                a[i][j]=0;
            else if(i==1)
                a[i][j]=aux;
            else if(i>j)
            {
                if(i==j+1)
                    a[i][j]=a[i-1][j+1];
                else
                    a[i][j]=a[i-1][j];
            }
            else if(i<j)
                a[i][j]=aux;
        }
        aux=c%10;
        c=c/10;
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

Subiectul 3
  1.b
  2.2,4
  3.#include <iostream>

 using namespace std;

 
int
main () 
 { 
int d, i = 2, k = 0, n, aux = 0, maxim = 0;
  
cin >> n;
  
while (i <= n)
	
	{
	  d = 2;
	  
for (d = 2; d <= i; d++)
		
		{
		  if (i % d == 0)
			k++;
		}
	  
if (maxim < k)
		
		{
		  maxim = k;
		  aux = i;
		}
	  i++;
	  k=0;
}
cout << maxim<<" "<<aux;
return 0;
}
4.#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int x,aux=0,auxx=0,ok=1;
    while(f>>x)
    {
        if(x%2==1 && ok==1)
        {
            aux=x;
            ok=0;
        }
        else if(x%2==1 && ok==0)
        {
            auxx=x;
            ok=1;
        }
    }
    if(auxx*aux!=0)
        cout<<aux<<" "<<auxx;
    else
        cout<<"numere insuficiente ";

    return 0;
}
