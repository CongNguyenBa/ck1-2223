#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];

  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }

  if (a[0] < a[1]) cout << 0 << " ";
  for (int i = 1; i < n - 1; ++i)
  {
    if (a[i] < a[i - 1] && a[i] < a[i + 1]) cout << i << " ";
  }
  if (a[n - 1] < a[n - 2]) cout << n - 1;

  return 0;
}