#include <iostream>
using namespace std;
void Increment_func(int a)
{
    int res;
        res = a++;
        cout<<"The result of assignment first, then increment: "<<res<<endl;
        cout<<"The value of overall a after increment: "<<a<<endl;
        res = ++a;
        cout<<"The result of increment first, then assignment: "<<res<<endl;

}

