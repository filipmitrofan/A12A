#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[101],*p;
  cin.get(s,101);
  p=strtok(s," ");
  while(p!=NULL){

   p[0]=p[0]-32;
   cout<<p<<" ";
    p=strtok(NULL," ");
  }
}
