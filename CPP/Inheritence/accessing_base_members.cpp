#include <iostream>
using namespace std;


class A
{
    public:
	int x;

	void showx()
	{
	    cout << "A : x=" << x<<endl;
	}


	A()
	{
	    x = 200;
	}
};

class B : public A
{
    public:
	int y;
	B()
	{
	    y = 'Y';
	}


	void showx()
	{
	    cout<<"B : y = " << y << endl;
	    //showx();
	    // This results in infinite recursive calls to showx().
	    // To avoid this, if the intention is to call showx() of A,
	    // it has to be qualified by A using scope-resolution operator.
	    A::showx();
	
	}
};


int
main()
{
    B b;
    b.showx();

    return 0;
}

