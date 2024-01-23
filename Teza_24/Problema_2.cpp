#include <bits/stdc++.h>

using namespace std;
ifstream f("bac.in");
int maxim(int n,int m,int T[30][30])
{
    int i,j,ok,maxi=0;
    for(i=1; i<=n; i++)

        if(T[i][1]%2!=0)
        {
            for(j=1; j<=m; j++)
                while(T[i][j]>0)
                {
                    ok=0;
                    if(T[i][j]%2==0)
                        ok=0;
                    else
                        ok=1;
                    break ;


                    T[i][j]/=10;
                }

            if(ok==0 && T[i][j]>maxi)
                maxi=T[i][j];

        }
    if(maxi==0)
        return -1;
    else return maxi;
}



int main()
{
    int T[30][30],n,m,i,j;
    f>>n;
    f>>m;
    for(i=1; i<=n; i++)
        for(j=1; i<=m; j++)
            f>>T[i][j];

    for(i=1; i<=n; i++)
    {
        for(j=1; i<=m; j++)
            cout<<T[i][j]<<" ";
    }
    cout<<endl;
    cout<<maxim(n,m,T);
    return 0;
}
