#include <iostream>
using namespace std;

class A
{
    public:
    A()
    {
	cout<<"----- A CONSTRUCTOR ---------" << endl;
    }

    ~A()
    {
	 cout<<"----- A DESTRUCTOR ---------" << endl;
    }
};

int
get_value(int a)
{
    if(a < 0)
	throw -1;

    return a;
}


int
main()
{
    try
    {
	A a1;
	get_value(-10);
    }


    catch(int x)
    {
	cout<< "Exception : " << x <<endl;
    }


    return 0;
}
