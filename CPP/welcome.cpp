//#include <iostream.h> 
//This format of header inclusion is not allowed in c++.
//Not sure why ? 
//Also namespace must be included inorder to successfully compile the 
//program.


#include <iostream>
using namespace std;

int
main()
{
    int a = 10;
    int &ref = a;

    cout<<"Welcome to CPP!!!\n";
    cout<< a << ref<< endl;

    cout<<"Address : a = "<<&a << "    ref = "<<&ref <<endl;
    return 0;
}
