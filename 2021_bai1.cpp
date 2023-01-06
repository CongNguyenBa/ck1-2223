#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double sum = 0;
  double divisor = 0;
  double n;

  cin >> n;

  for (int i = 1; i <= n; ++i)
  {
    divisor += i;
    // 0 + 1 + 2 +... (mẫu)
    sum += i / divisor;
  }

  cout << fixed << setprecision(3) << sum;
  return 0;
}