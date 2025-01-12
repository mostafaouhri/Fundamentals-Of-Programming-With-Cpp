
#include <iostream>
// #include <cmath>
// #include <cctype>
// #include <algorithm>

using namespace std;

int pricing(int new_phones ,int used_phones ,int new_price, int taxes )
{
  int after_taxes;
  //total new phones
new_phones =new_phones-used_phones;
new_phones = new_phones * new_price;//montant new
used_phones=used_phones * (new_price-200);
after_taxes=(new_phones+used_phones)-((new_phones+used_phones)*taxes/100);

return after_taxes;
}

int main()
{
  cout << pricing(50, 10, 800, 20) << "\n"; // 30400
  return 0;
}

