#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = { 5, 4, 3, 2, 1 };

  // Method One
//   sort(nums.begin(),nums.end());

  // Method Two
    // reverse(nums.begin(),nums.end());

  // Method Three -> Use Swap + Loop For Challenge
    // nums.swap(nums);
    ?????

  for (int i : nums)
  {
    cout << i << "\n";
  }

// Needed Output // 1 2 3 4 5
    return 0;
}