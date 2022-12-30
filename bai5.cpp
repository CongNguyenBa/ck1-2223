#include <iostream>

using namespace std;
#define MAX 100

// n = số cột (cũng như số dòng) của ma trận vuông
void rotateMatrix(int a[][MAX], int n)
{
  transpose(a, n);
  reverse(a, n);
}

// chuyển các dòng thành các cột
void transpose(int a[][MAX], int n)
{
  int tmp;
  for (int i = 0; i < n; ++i)
  {
    for (int j = i + 1; j < n; ++j)
    {
      tmp = a[i][j]; 
      a[i][j] = a[j][i]; // a[0][1] = a[1][0], a[0][2] = a[2][0]...
      a[j][i] = tmp; 
    }
  }
}

void reverse(int a[][MAX], int n)
{
  int tmp;
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < n / 2; ++j)
    {
      tmp = a[i][j];
      a[i][j] = a[i][n - 1 - j];
      a[i][n - 1 -j] = tmp;
    }
  }
}

int checkSumDiagonal(int a[][MAX], int n)
{
  int sumDiagonal, sumCounterDiagonal;
  for (int i = 0; i < n; ++i)
  {
    sumDiagonal += a[i][i];
  }
  for (int i = 0; i < n; ++i)
  {
    sumCounterDiagonal = a[n - 1 - i][i];
  }
  if (sumDiagonal == sumCounterDiagonal) return sumDiagonal;
  else return 0;
}

bool magicSquare(int a[][MAX], int n)
{
  int res = checkSumDiagonal(a, n);
  if(res != 0)
  {
    // cộng tổng các dòng
    int sum;
    for (int i = 0; i < n; ++i)
    {
      sum = 0;
      for (int j = 0; j < n; ++j)
      {
        sum += a[i][j];
      }
      if (sum != res) return false;
    }

    // cộng tổng các cột
    for (int i = 0; i < n; ++i)
    {
      sum = 0;
      for (int j = 0; j < n; ++j)
      {
        sum += a[j][i];
      }
      if (sum != res) return false;
    }

    return true;
  }
  return false;
}