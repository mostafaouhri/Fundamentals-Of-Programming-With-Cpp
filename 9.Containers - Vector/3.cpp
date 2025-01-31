#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    
vector<int> nums = { 10, 20, 30, 40, 50, 60, 70, 80 };

  // Write Your Code Here
    vector<int>:: iterator fir=nums.begin();
    auto last=nums.end()-1;

  // Do Not Edit Below
  cout << *fir << "\n"; // 10
  cout << *last << "\n"; // 80

    return 0;
}