#include <iostream>

using namespace std;

// tram trau trăm cỏ, trau dung an 5, trau nam an 3, trau gia lu khu 3 con 1 bo

int main()
{
  double trauDung, trauNam, trauGia;

  trauDung = 0;
  while (trauDung <= 20)
  {
    while (trauNam <= 33)
    {
      trauGia = 100 - trauDung - trauNam;
      if (5 * trauDung + 3 * trauNam + (1/3) * trauGia == 100)
      {
        cout << "\nTrau Dung: " << trauDung << "\nTrau Nam: " << trauNam << "\nTrau Gia: " << trauGia;
      }
      trauNam++;
    }
    trauDung++;
  }

  return 0;
}