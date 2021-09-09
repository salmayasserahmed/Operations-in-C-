#include <iostream>
using namespace std;
void reverse_func(){
int i,n;
int arr[1000];



    cout<<"Enter Array Size: "<<endl;
    cin>>n;
    cout<<"Enter Array's Elements: "<<endl;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Your input is "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"The reverse of your input: "<<endl;
    for(i=(n-1); i>=0; i--)
    {
        cout<<arr[i]<<endl;
    }


}
