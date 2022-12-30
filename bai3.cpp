#include <iostream>
#include <cmath>

using namespace std;

struct Circle
{
  double x, y, r;
};

int checkOverlapped(Circle c1, Circle c2)
{
  double dist = sqrt(pow((c1.x - c2.x),2) + pow((c1.y - c2.y),2));
  if (dist == 0) return 3;
  else if (dist < (c1.r + c2.r)) return 2;
  else if (dist == (c1.r + c2.r)) return 1;
  else if (dist > (c1.r + c2.r)) return 0;
}

int main()
{
  // tự làm:))))
}