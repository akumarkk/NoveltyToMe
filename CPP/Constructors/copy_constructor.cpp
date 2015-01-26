#include <iostream>

using namespace std;


class A
{
    int x;

    static int count;

    public:
	A(int x)
	{
	    count++;
	    cout << "Objects created - " << count << endl;
	    cout <<"Normal constructor - value = " << x << endl;
	}

	~A()
	{
	    count--;
	    cout << "Destructor A - " << count << endl;
	}
};


int A::count = 0;

int
main()
{
    A a1(10);
    A a2 = a1; // In this case, copy constructor is called.
	       // So constructor A(int x) defined in A will not be called

    A a3(99);

    return 0;
}
