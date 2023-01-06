#include <iostream>
#include <cmath>

using namespace std;

bool checkPrime(int n)
{
  if (n < 2) return false;
  for (int i = 2; i <= sqrt(n); ++i)
  {
    if (n % i == 0) return false;
  }
  return true;
}

int main()
{
  int n, x1, x2, count = 0;
  cin >> n;

  for (int i = 2; i < n / 2; ++i)
  {
    if (checkPrime(i) == true)
    {
      x1 = i;
      x2 = n - i;
      if (checkPrime(x2) == true)
      {
        cout << "(" << x1 << ", " << x2 << ") ";
        count++;
      }
    }
  }

  if (count == 0) cout << "KHONG TIM THAY";

  return 0;
}