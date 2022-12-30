#include <iostream>
#include <cstring>

using namespace std;


unsigned int convert(char bin[])
{
  int sum = 0;
  int k = 0;
  int powTwo = 1;
  int n = strlen(bin);
  sum += bin[n - 1];
  if (strlen(bin) > 1)
  {
    for (int i = n - 2; i >= 0; --i)
    {
      k++;
      powTwo *= 2;
      sum += (bin[i] * powTwo);
    }
  }

  return sum;
}

int main()
{
  // tự viết đi cho quen nha
  return 0;
}