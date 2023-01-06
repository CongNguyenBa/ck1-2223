#include <iostream>

using namespace std;

#define M 100
#define N 100

bool convertMatrixToArray(int a[M][N], int m, int n, int b[], int &k)
{
  k = m * n;
  int c = 0;
  for (int i = 0; i < m; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      b[c++] = a[i][j];
    }
  }
  return true;
}

int main()
{
  int a[M][N];
  int m, n;
  int b[1000];
  int k;

  cin >> m >> n;
  for (int i = 0; i < m; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      cin >> a[i][j];
    }
  }

  convertMatrixToArray(a, m, n, b, k);

  for (int i = 0; i < k; ++i)
  {
    cout << b[i] << " ";
  }

  return 0;


}