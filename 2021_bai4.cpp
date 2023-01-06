#include <iostream>
#include <string>

using namespace std;

struct Student
{
  string ID;
  string name;
  double avgPoint;
};

void inputStudent(Student s[], int &n)
{
  cin >> n;
  for (int i = 0; i < n; ++i)
  {
    cin >> s[i].ID;
    cin.ignore();
    getline(cin, s[i].name);

    cin >> s[i].avgPoint;
  }
}

int main()
{
  Student s[100];
  int n;
  
  inputStudent(s, n);

  for (int i = 0; i < n; ++i)
  {
    cout << s[i].ID << " " << s[i].name << " " << s[i].avgPoint;
    cout << "\n";
  }
  return 0;
  
  
}
