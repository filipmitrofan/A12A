#include <bits/stdc++.h>
//21 9 16 2 16 2 9 4 9 21 9 2 8

using namespace std;
fstream f("BAC.txt");
int v[100];
void problema3_14(int n)
{
    int x;
    int k=0;
    while(f>>x)
        v[x]++;
    for(int i=0;i<=99;i++)
    {
        k=v[i]+k;
        if(k>=n)
        {
            cout<<i;
            break;
        }
    }

}

int main()
{
    problema3_14(6);
    return 0;
}
