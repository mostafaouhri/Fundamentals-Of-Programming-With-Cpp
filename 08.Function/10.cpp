
#include <iostream>
// #include <cmath>
// #include <cctype>
// #include <algorithm>

using namespace std;

int minpositive(int nums[],int size)
{
  int min_po=1000000;
  for (int i = 0; i < size; i++)
  {
    if(nums[i]<min_po && nums[i]>0)
    min_po=nums[i];
  }
  return min_po;
}

int main()
{
  int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0 }; // 5
  int numssize = size(numbers);
  cout << minpositive(numbers, numssize) << "\n";

  return 0;
}

