#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
     vector<int> nums = { 10, 20, 30, 40, 50, 60, 70, 80 };
  vector<int>::iterator it = nums.begin();
  // Write Method One
    // advance(it,sizeof(nums.front()));//50

  // Write Method Two
    // it=nums.end()-1-1-1-1;//50

  // Write Method Three
  nums.erase(nums.begin(),nums.begin()+sizeof(nums.front()));

  cout << *it << "\n"; // 50
    return 0;
}