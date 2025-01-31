#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
  vector<int> numbers;
  vector<float> floats(100);

  // Fill Integers Here
  numbers.insert(numbers.begin(),100,1000);

  // Fill Floats Here
  int i=0;
  while (i<100)
  {
     floats[i]=100.50;
    ++i;
  }
  
  cout << numbers.at(0) << "\n"; // 1000
  cout << numbers.at(99) << "\n"; // 1000

  cout << floats.at(0) << "\n"; // 100.50
  cout << floats.at(99) << "\n"; // 100.50
























    return 0;
}