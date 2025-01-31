#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    
  vector<int> firstnumbers = { 10, 30, 50, 70 };
  vector<int> secondnumbers = { 20, 40, 60, 80 };
  vector<int> nums(8) ;
  
  merge(firstnumbers.begin(),firstnumbers.end(),secondnumbers.begin(),secondnumbers.end(),nums.begin());

sort(nums.begin(),nums.end());
for (int n : nums)
{
    cout<<n<<endl;

}


// // Output Needed
// 10
// 20
// 30
// 40
// 50
// 60
// 70
// 80























    return 0;
}