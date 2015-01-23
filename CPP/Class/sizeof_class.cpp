#include <iostream>
using namespace std;

class A
{
    int a;
    public:
    void print(void);
};

void A::print(void)
{
    cout << "Value of a : " << a << endl;
}

class B
{
    int b;
};


int
main()
{
    A a;


    cout << "Size of A :    " << sizeof(a) <<endl;
    cout << "Size of B :    " << sizeof(B) <<endl;

    a.print();
    return 0;
}
    
