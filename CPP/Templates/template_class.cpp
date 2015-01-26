#include <stdio.h>
#include <iostream>

using namespace std;

template <class T, class T1>
class X
{
    T x;
    public:
	X(T i=100.01)
	{
	    x = i;
	}

	T1 get_value()
	{
	    cout<< "Value of x = " << x<<endl;
	    return x;
	}
};

int
main()
{
    X<float, int> x1;

    cout << "returned value = "<<x1.get_value()<<endl;

    return 0;
}
