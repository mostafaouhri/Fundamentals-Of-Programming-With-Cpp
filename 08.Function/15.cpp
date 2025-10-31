
#include <iostream>
// #include <cmath>
// #include <cctype>
// #include <algorithm>

using namespace std;

float avg(int money[], int size)
{
  float total;
  for (int i = 0; i < size; i++)
  {
    total+=money[i];
  }
  
  return total/size;
}

int main()
{
  int money[] = { 10, 20, 15, 25, 30, 35 };
  int monsize = size(money);
  cout << avg(money, monsize) << "\n"; // 22.5
  return 0;
}

