#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    
vector<int> n1 = { 1, 2, 3 };
  vector<int> n2 = { 4, 5, 6 };
  vector<int> allvectors ;

  // Your Insert Code Here
  n1.insert(n1.end(),1,n2.front());
  n1.insert(n1.end(),1,n2.at(1));
  n1.insert(n1.end(),1,n2.at(2));

  for (int i : n1)
  {
    cout << i << "\n";
  }
    cout <<"size "<<n1.size() << "\n";


// // Needed Output
// 1
// 2
// 3
// 4
// 5
// 6





















    return 0;
}