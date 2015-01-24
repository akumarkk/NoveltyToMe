#include <iostream>
using namespace std;


class A
{
    static int x;
    public :
	void get_value()
	{
	    cout << "Value of x = " << x << endl;
	}
};

int A::x = 1999;

int
main()
{
    A a1;
    a1.get_value();
    
    //cout << "Private static value = " << A::x << endl;
    //  error: 'x' is a private member of 'A'
    return 0;
}
