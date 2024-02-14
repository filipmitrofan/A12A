#include <bits/stdc++.h>

using namespace std;
ifstream fin("bac.in");
int main()
{
    long x, y, n;
  f >> x;
  n = 1;
  while (f >> y) {
    if (x == y)
      n++;
    else {
      cout << x << " " << n << " ";
      n = 1;
    }
    x = y;
  }
  cout << x << " " << n;

    return 0;
}
