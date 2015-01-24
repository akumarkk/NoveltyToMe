#include <iostream>
using namespace std;


class A
{
    public:
	int y;
    static int x;
    static void set_value(int val)
    {
	x = val;
	cout << "Value = " << x << endl;
	
	//y = val; // invalid use of member 'y' in static member function
	//cout << "Value = " << y << endl; // invalid use of member 'y' in static member function
    }

};

int A::x; 
// If no defined :
// "A::x", referenced from:  A::set_value(int) in static_mem-db6318.o

int
main()
{
    A::set_value(99);
    A a;
    a.set_value(100);
    return 0;
}
