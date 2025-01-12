
#include <iostream>
// #include <cmath>
// #include <cctype>
// #include <algorithm>

using namespace std;

int firstnegative(int nums[],int size)
{
  int big_neg=-10000000;
  for (int i = 0; i < size; i++)
  {
    if (nums[i]>big_neg && nums[i]<0)
    {
      big_neg=nums[i];
    }
    
  }
  return big_neg;
}

int main()
{
  int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0, -5, -10 }; // -5
  int numssize = size(numbers);
  cout << firstnegative(numbers, numssize) << "\n";
  return 0;
}

