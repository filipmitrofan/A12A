#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,aux{},i{};
    cin>>n;
    char s[201], *p;
    cin.getline(s,201);
    p=strtok(s," ");
    while(p)
    {
        aux+=strlen(p);
        if(aux<=n)
        {
            cout<<p<< " ";

        }
        if(aux>n)
        {
            i=aux-strlen(p)+1;
            while(i<=n)
            {
                cout<< "*";
                i++;

            }
            cout<<endl<<p<< " ";
            aux=strlen(p);

        }
        aux+=1;

        p=strtok(NULL," ");
    }
    return 0;
}
