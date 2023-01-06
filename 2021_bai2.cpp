#include <iostream>

using namespace std;

bool checkArithmeticProgression(int a[], int n)
{
  int diff = a[1] - a[0];
  for (int i = 1; i < n - 1; ++i)
  {
    if (a[i + 1] - a[i] != diff)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int n;
  cin >> n;
  int a[n];
  
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }

  cout << checkArithmeticProgression(a, n);

  return 0;


}