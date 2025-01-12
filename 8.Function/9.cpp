
#include <iostream>
// #include <cmath>
// #include <cctype>
// #include <algorithm>

using namespace std;

int sumall(int nums[],int s,int n)
{
  int R=0;
  for (int i = 0; i < s; i++)
  {
    if(nums[i]!=n)
    {
    R+=nums[i];
    cout<<nums[i];
    if (i<(s-1))
    {
      cout<<" + ";
    }
    else
    {
      cout<<" = ";
    }
    
    }
  }
  
return R;
}

int main()
{
 int numbers[] = { 13, 20, 3, 30, 5, 7, 40, 13 }; // 20 + 3 + 30 + 5 + 7 + 40 = 105
  int numssize = size(numbers);
  int noneed = 13;
  cout << sumall(numbers, numssize, noneed) << "\n";

  return 0;
}

