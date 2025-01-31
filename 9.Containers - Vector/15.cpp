#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = { 1, 2, 3, 4, 5, 6, 7, 8 };

  // Your Code Here
    rotate(nums.begin(),nums.begin()+4,nums.end());
    
  // nums.erase(nums.begin(),nums.begin()+4);
  // nums.push_back(1);
  // nums.push_back(2);
  // nums.push_back(3);
  // nums.push_back(4);

  for (int i : nums)
  {
    cout << i << "\n";
  }

// // Needed Output
// 5
// 6
// 7
// 8
// 1
// 2
// 3
// 4























    return 0;
}