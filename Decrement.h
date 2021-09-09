#include <iostream>
using namespace std;
void Decrement_func(int a)
{
    int res;
         res = a--;
        cout<< "The result of assignment first, then decrement: "<< res << endl;
        cout<< "The result of overall a after decrement: "<< a << endl;
        res = --a;
        cout<< "The result of decrement first, then assignment: "<< res << endl;


}

