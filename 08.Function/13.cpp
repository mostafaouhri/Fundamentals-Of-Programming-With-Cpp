
#include <iostream>
// #include <cmath>
// #include <cctype>
// #include <algorithm>

using namespace std;

string greeting(string name ,string sex="")
{
  cout<<"Hello ";
  if (sex=="Male")
    cout<<"Mr ";
  else if (sex=="Female")
    cout<<"Miss ";
  cout<<name;

  
  
  return"";
}

int main()
{
  
  cout << greeting("Osama", "Male") << "\n"; // Hello Mr Osama
  cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
  cout << greeting("Sameh") << "\n"; // Hello Sameh
  return 0;
}

