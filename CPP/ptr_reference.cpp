#include <iostream>
using namespace std;

int
main()
{
    int a = 100;
    int & ref = a;
    int *ptr  = &a;

    cout << ref << *ptr <<endl;
    cout << "Address : " << &ref << "ptr = "<< ptr <<endl;
    cout << "ptr address = " << &ptr <<endl;

    return 0;
}
