#include <iostream>
using namespace std;


class A
{
    int a;
};


class B : public A
{
    int b;
};


int main()
{
    cout << "sizeof(A) = " << sizeof(A) <<endl;
    cout << "sizeof(B) = " << sizeof(B) <<endl;

    return 0;
}

