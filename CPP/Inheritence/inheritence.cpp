#include <iostream>
using namespace std;

class A
{
    int x, y;
    public:
	void set_value(int x=100)
	{
	    x = 100;
	    y+=x;
	}

	void get_value()
	{
	    cout << "Welcome to class A !\n";
	    cout << "x = " << x <<endl;
	    cout << "y = " << y << endl;
	}

};


class B : public A
{
    int a;
    public :
	void get()
	{
	    set_value();
	    cout << "Welcome to class BBBBBB \n";
	    //cout << "x = " << x << endl;
	    //cout << "y = " << y << endl;
	}

};


int
main()
{
    B b1;
    b1.get();

    A a1;
    a1.set_value(200);
    a1.get_value();

    return 0;
}

