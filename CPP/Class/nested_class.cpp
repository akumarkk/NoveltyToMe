#include <iostream>
using namespace std;
// Value of nested class can not be accessed directly from Enclosing class
// Either Nested class or Enclosing class can not directly access the 
//  members of each class without object

class A
{
    public :
    int a;

    class B 
    {
	public:
	    int b;

	    void get()
	    {
		//cout << a << endl;
	    }
    }B1;

    void get_value()
    {
	cout << "B class value " << B1.b <<endl;
	cout << "A class value " << a << endl;
    }
};

int
main()
{
    A a1;
    a1.get_value();

    return 0;
}

