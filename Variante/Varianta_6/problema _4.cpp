#include <bits/stdc++.h>

using namespace std;
ifstream fin("bac.in");
int n, fr[10000];

int main()
{
    int y;
    for(int i = 1; i <= 10000; i++) {
        while(fin>>y)
        {
            fr[y]++;
        }
    }
    for(int i = 1; i <= 10000; i++) {
            if(fr[i]>0)
            cout << i<<" "<< fr[i]<<" ";
        }

    return 0;
}
