/* No matter what object is assigned to pointer of a class, 
 * it always invokes function from pointer class.
 *
 * class A;
 * class B;
 *
 * A a1;
 * B b1;
 *
 * A *ptr = &a1; ptr->show() // show() from class A is called
 * ptr = &b1;  ptr->show() // show() from class A is invoked
 *
 */


#include <iostream>
using namespace std;

class base
{
    public:
	void show(void);
};

// If public keyword is removed here, 
// cannot cast 'der' to its private base class 'base'
class der : public base
{
    public:
	void show(void);
};

void base::show(void)
{
    cout<< " This is Base class " << endl;
}

void der::show(void)
{
    cout << "This is DERIVED class " << endl;
}

int
main()
{

    base b_obj, *b;
    der  d_obj;

    b = &b_obj;
    b->show();

    b = &d_obj; // Derived class object can not be assigned to base class
    b->show();

    return 0;
}
    


