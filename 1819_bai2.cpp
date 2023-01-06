#include <iostream>
#include <string>

using namespace std;

bool endOfWord(char &s0, char &s1)
{
  if (s0 < 'z' && s0 > 'a')
  {
    if (s1 == ' ' || s1 == ',' || s1 == '.') return true;
    else return false;
  }
  return false;
}

int countWord(string s)
{
  int count = 0;
  for (int i = 0; i < s.length() - 1; ++i)
  {
    if (endOfWord(s[i], s[i + 1]) == true)
    {
      count++; 
    }
  }
  return count;
}

void fixString(string s, string n)
{
  int letter = 0;
  for (int)
}
