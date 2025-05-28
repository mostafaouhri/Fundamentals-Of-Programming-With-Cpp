#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    vector<int> numbers = { 10, 20, 30, 40 };
    cout<<numbers.front()<<"\n";
    cout<<numbers.back()<<"\n";
    cout<<"==============\n";

    cout<<numbers.at(0)<<"\n";
    cout<<numbers.at(numbers.size()-1)<<"\n";
    cout<<"==============\n";

    cout<<*numbers.begin()<<"\n";
    cout<<*(numbers.end()-1)<<"\n";
    cout<<"==============\n";

    cout<<numbers[0]<<"\n";
    cout<<numbers[3]<<"\n";
    cout<<"==============\n";
    
    return 0;
}