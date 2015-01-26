#include <iostream>

using namespace std;

class A
{
    static int count;

    public:
	A()
	{
	    count++;
	    cout<< "Created an instance of A" <<endl;
	    cout<< " Count = " << count <<endl;
	}
};

int A::count=0;

int
main()
{
    A a1;
    //a1.A();
    // error: cannot refer to type member 'A' in 'A' with '.'

    A *Aptr = new A;

    return 0;
}
