#include <iostream>
#include <string>

using namespace std;

// Though T and T1 , two templates are defined here, same data type can be
// passed to both the templates


template <class T, class T1>
T larger(T a, T1 b)
{
    if(a>b)
	return a;
    else 
	return b;
}


int
main()
{
    int a, b, large;

    a = 100;
    b = 200;
    large = larger(a, b);
    cout<<"(a, b) = (" << a<< ", " << b<< ") = " << large <<endl;

    return 0;
}

