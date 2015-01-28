#include <iostream>
using namespace std;

int
hmean(int a, int b)
{
    if(a == 10)
	throw a;
    else if(a == 20)
	throw 20;
    else if(a == 30)
	throw 30;
    else if(a == 100)
	throw "Maximum value reached";

    cout<<"Cool, No exceptions" <<endl;
    return a;
}


int
main()
{
    int a;
    cout << "value of a (10, 20, 30, 40, 100) " << endl;
    cin>>a;

    try
    {
	hmean(a, 100);
    }
    catch(int a)
    {
	cout<<"Caught exception ..Value - "<< a<< endl;
    }
    catch(char const *str)
    {
	cout <<"Caught exception .. value - " << str << endl;
    }

    return 0;
}

