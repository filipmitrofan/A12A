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

