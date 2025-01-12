
#include <iostream>
// #include <cmath>
// #include <cctype>
// #include <algorithm>

using namespace std;

// Write Your Function Here
int plusandmultiply(int n1[] ,int n2)
{
  int Even=0,odd=1;
  for(int i=0;i<n2;i++)
  {
    if(n1[i]%2==0)
      {
        Even+=n1[i];
      cout<<n1[i];
      if (i<(n2-1))
        cout<<" + ";
      else
        cout<<" = ";
      }
  }
  cout<<Even<<"\n";

  for (int i = 0; i < n2; i++)
  {
    if((n1[i]%2!=0))
      {
        odd*=n1[i];
      cout<<n1[i];
      if (i<(n2-1))
        cout<<" * ";
      else
        cout<<" = ";
      }
  }
  cout<<odd<<endl;

cout<<Even<<" + "<<odd<<" = ";
  return Even+odd;
}
int main()
{
  int numbers[] = { 10, 20, 3, 30, 5, 7, 40 };
  int numssize = size(numbers);
  cout << plusandmultiply(numbers, numssize) << "\n";
  // Even Numbers -> 10 + 20 + 30 + 40 = 100
  // Odd Numbers  -> 3 * 5 * 7 = 105
  // Total = 100 + 105 = 205
  return 0;
}

