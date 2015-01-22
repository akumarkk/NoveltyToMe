/* Virtual keyword provides an ability for derived class to override
 * the function defined by base class.
 *
 * This is the mechanism to provide Dynamic Polymorphism.
 * 
 * Using keyword "virtual" multiple times for a same funtion 
 *  will not hurt the Compiler.
 */

#include <iostream>
using namespace std;

class A
{
    private:
	int a;
    public:
	virtual void show(int a);
};


class B : public A
{
    private:
	int b;
    public:
	virtual void show(int b);
};


class C : public B
{
    private:
	int c;
    public:
	C()
	{
	    c = 'c';
	    c1 = 'C';
	}
	int c1;
	void show(int c);
};

void C::show(int c)
{
    cout << "Welcome to class C" << endl;
    cout << "Given value : " << c << endl;
    cout << "Private member : " << this->c << endl;
    cout << "Public member  : " << this->c1 << endl;
    cout << "---------- END of Class C ----------" << endl;
}


void A::show(int a)
{
    cout<< "Welcome to class A" << endl;
    cout << " Value of a = " <<a <<endl;
    cout << "Private member = " << this->a << endl;
}

void B::show(int a)
{
    cout<< "Welcome to class B" << endl;
    cout << " Value of b = " <<b <<endl;
    cout << "Private member = " << this->b << endl;
}


int
main()
{
    A *Aptr, a1;
    B *Bptr, b1;
    C c1;

    Aptr = &a1;
    Aptr->show(20);

    Aptr = &b1;
    Aptr->show(30);

    Bptr = &c1;
    Bptr->show('C');

    return 0;
}

