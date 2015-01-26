#include <iostream>
using namespace std;

class A
{
    public:
	A(int x)
	{
	    cout<<"Constructor of A. Value = " << x <<endl;
	}
};


int
main()
{
    // Trying to overload default constructor
    //A a1;
    // candidate constructor not viable: requires single argument 'x', but no arguments were provided
    //

    A a1(20);
    return 0;
}
