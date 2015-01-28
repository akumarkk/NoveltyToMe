#include <iostream>

using namespace std;

class A
{
    mutable int x;
    public:
    void show() const;
};


// void A::show()
// member declaration does not match because it is const qualified
void A::show() const
{
    x = 100;
    cout <<"Value of x = " <<x << endl;
}

int
main()
{
    A a;
    a.show();

    return 0;
}
