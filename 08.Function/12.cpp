
#include <iostream>
// #include <cmath>
// #include <cctype>
// #include <algorithm>

using namespace std;

string createurl(string protocol ,string name ,string domain ,bool n=1)
{
  string d=".";
  string m="://";
  string www="www.";
cout<<protocol<<m;
if (n==1)
  cout<<www;
cout<<name<<d<<domain;

return "";
}

int main()
{
  cout << createurl("https", "elzero", "org") << "\n"; // https://www.elzero.org
  cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
  cout << createurl("http", "learn", "net") << "\n"; // http://www.learn.net
  return 0;
}

