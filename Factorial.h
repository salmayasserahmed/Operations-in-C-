#include <iostream>
using namespace std;
void factorial(int a)
{
    long int factorial= 1;
    for(int i = 1; i<=a; i++)
    {
        factorial *=i;
    }
    cout<<factorial<<endl;
}
