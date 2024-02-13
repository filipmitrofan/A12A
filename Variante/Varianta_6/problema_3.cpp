#include <iostream>

using namespace std;

int main()
{
   int a[100],i,n,s;
   cin>>n;
   for(i=0;i<n;i++)
    cin>>a[i];

    while(n>0)
   {
       s=0;
       for(i=0;i<n;i++)
       {s+=a[i];}
       cout<<s<<endl;
       n--;
   }


    return 0;
}
