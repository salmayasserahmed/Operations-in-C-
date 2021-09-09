#include <iostream>
#include "Add.h"
#include "Subtract.h"
#include "Multiply.h"
#include "Divide.h"
#include "AND.h"
#include "OR.h"
#include "NOT.h"
#include "XOR.h"
#include "Reminder.h"
#include "Increment.h"
#include "Decrement.h"
#include "Factorial.h"
#include "Power.h"
#include "Reverse.h"
using namespace std;

int main()
{
    char c;
    while(true)
    {
        int ID,a,b;



        cout<<"Please Enter your choice: ";
        cin>> ID;

        switch(ID){
        case 0:
            cout<<"Display Menu" <<endl;
            cout<<"1. Add" <<endl;
            cout<<"2. Subtract" <<endl;
            cout<<"3. Multiply" << endl;
            cout<<"4. Divide" << endl;
            cout<<"5. AND" << endl;
            cout<<"6. OR" << endl;
            cout<<"7. NOT" << endl;
            cout<<"8. XOR" << endl;
            cout<<"9. Reminder" << endl;
            cout<<"10. Increment" << endl;
            cout<<"11. Decrement" << endl;
            cout<<"12. Factorial" << endl;
            cout<<"13. 2^n" << endl;
            cout<<"14. Reverse an Array" << endl;
            break;
        case 1:
            cout<< "Enter the first number: ";
            cin>>a;
            cout<< "Enter the second number: ";
            cin>>b;
            Add_func(a,b);
            cout<<"Do you want to continue? [Y/N]"<<endl;
            cin>>c;
             if(c == 'y')
                continue;
             else
                goto exit_loop;

        case 2:
            cout<< "Enter the first number: ";
            cin>>a;
            cout<< "Enter the second number: ";
            cin>>b;
            Subtract_func(a,b);
            cout<<"Do you want to continue? [Y/N]"<<endl;
            cin>>c;
             if(c == 'y')
                continue;
             else
                goto exit_loop;

        case 3:
            cout<< "Enter the first number: ";
            cin>>a;
            cout<< "Enter the second number: ";
            cin>>b;
            multiply_func(a,b);
            cout<<"Do you want to continue? [Y/N]"<<endl;
            cin>>c;
             if(c == 'y')
                continue;
             else
                goto exit_loop;

            break;

        case 4:
            cout<< "Enter the first number: ";
            cin>>a;
            cout<< "Enter the second number: ";
            cin>>b;
            division_func(a,b);
            cout<<"Do you want to continue? [Y/N]"<<endl;
            cin>>c;
             if(c == 'y')
                continue;
             else
                goto exit_loop;
            break;

        case 5:
            cout<< "Enter the first number: ";
            cin>>a;
            cout<< "Enter the second number: ";
            cin>>b;
            AND_func(a,b);
            cout<<"Do you want to continue? [Y/N]"<<endl;
            cin>>c;
             if(c == 'y')
                continue;
             else
                goto exit_loop;
            break;

        case 6:
            cout<< "Enter the first number: ";
            cin>>a;
            cout<< "Enter the second number: ";
            cin>>b;
            OR_func(a,b);
            cout<<"Do you want to continue? [Y/N]"<<endl;
            cin>>c;
             if(c == 'y')
                continue;
             else
                goto exit_loop;
            break;

        case 7:
            cout<< "Enter the number: ";
            cin>>a;
            NOT_func(a);
            cout<<"Do you want to continue? [Y/N]"<<endl;
            cin>>c;
             if(c == 'y')
                continue;
             else
                goto exit_loop;
            break;

        case 8:
            cout<< "Enter the first number: ";
            cin>>a;
            cout<< "Enter the second number: ";
            cin>>b;
            XOR_func(a,b);
            cout<<"Do you want to continue? [Y/N]"<<endl;
            cin>>c;
             if(c == 'y')
                continue;
             else
                goto exit_loop;
            break;

        case 9:
            cout<< "Enter the first number: ";
            cin>>a;
            cout<< "Enter the second number: ";
            cin>>b;
            Reminder_func(a,b);
            cout<<"Do you want to continue? [Y/N]"<<endl;
            cin>>c;
             if(c == 'y')
                continue;
             else
                goto exit_loop;
            break;

        case 10:
            cout<< "Enter the number: ";
            cin>>a;
            Increment_func(a);
            cout<<"Do you want to continue? [Y/N]"<<endl;
            cin>>c;
             if(c == 'y')
                continue;
             else
                goto exit_loop;
            break;

        case 11:
            cout<< "Enter the number: ";
            cin>>a;
            Decrement_func(a);
            cout<<"Do you want to continue? [Y/N]"<<endl;
            cin>>c;
             if(c == 'y')
                continue;
             else
                goto exit_loop;
            break;

        case 12:
            cout<< "Enter the number: ";
            cin>>a;
            factorial(a);
            cout<<"Do you want to continue? [Y/N]"<<endl;
            cin>>c;
             if(c == 'y')
                continue;
             else
                goto exit_loop;
            break;
        case 13:
            cout<< "Enter the number: ";
            cin>>a;
            power(a);
            cout<<"Do you want to continue? [Y/N]"<<endl;
            cin>>c;
             if(c == 'y')
                continue;
             else
                goto exit_loop;
            break;
        case 14:
            reverse_func();
            cout<<"Do you want to continue? [Y/N]"<<endl;
            cin>>c;
             if(c == 'y')
                continue;
             else
                goto exit_loop;
            break;
        default:
            cout<<"Please enter a valid choice";
            break;

    }

    }
exit_loop: ;


        return 0;
}
