#include <iostream>

using namespace std;

// accepted
long long power(int x, int y)
{
  long long res = 0;
  long long donThuc = 0;
  long long soLan = 0;
  if (y == 0) res = 1;
  if (y == 1) res = x;
  else
  {
    soLan = x;
    for (int i = 1; i < y; ++i)
    {
      res = 0;
      for (int i = 0; i < soLan; ++i)
      {
        res += x;
        cout << res << " ";
      }
      x = res;
      cout << "\n";
    }
  }

  return res;
}

// 3 ^ 2 = 3 * 3 = 3+3+3
// 3 ^ 3 = 3 * 3 * 3 = 3+3+3 --> 9+9+9

int main()
{
  int x, y;
  cin >> x >> y;
  cout << power(x, y);

  return 0;
}