
#include <iostream>
// #include <cmath>
// #include <cctype>
// #include <algorithm>

using namespace std;

int books(int smal_books ,int medium_books ,int big_books ,int shelf)
{
  int space_books;
  int space_available;

space_books=(smal_books*2)+(medium_books*4)+(big_books*6);
space_available=(shelf*20);

if(space_available>space_books)
{
  return space_available-space_books;
}
else
{
  return 0;
}

}
//smal book  2 space
//midem book 4 space
//big book   6 space
//shelf   =  20 space

int main()
{
  cout << books(10, 4, 3, 4) << "\n"; // 26
  cout << books(10, 4, 3, 2) << "\n"; // 0
  return 0;
}

