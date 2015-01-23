#include <iostream>
using namespace std;

class A
{
    char ch;
    char ch1;
    public:
    A()
    {
	ch = 'A';
	ch1 = 'a';
	cout << "constructor ch     :   " << ch << endl;
	cout << "constructor ch1     :   " << ch1 << endl;
    }

	void print();
};


void A::print()
{
    cout << "ch	    :	" << ch << endl;
    cout << "ch1    :	" << ch1<< endl;
}


int
main()
{
    A a;
    char *ptr;

    a.print();
    ptr = (char *)&a;

    *ptr = 'X';
    *(ptr+1) = 'y';
    
    cout << "Manipulation of private members through pointers ..." << endl;

    a.print();
    return 0;
}

