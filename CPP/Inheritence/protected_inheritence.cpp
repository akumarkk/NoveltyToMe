#include <iostream>
using namespace std;

class A
{
    int x;
    public:
    int y;

    protected:
    int z;
};


//class B: protected A 
class B: public A
{

};


int
main()
{
    A *ptr;
    B b;
    ptr = &b;

    //b.y = 100; This is not allowed any way in case of protected inheritence.
    //b.z = 200; This is not allowed for obvious reasons.
    return 0;
}
