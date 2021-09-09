#include <iostream>
using namespace std;
void power(int a)
{
    int res=1;

    for(int i = 1; i<=a; i++)
    {
        res= res * 2;
    }
    cout<<res<<endl;
}
