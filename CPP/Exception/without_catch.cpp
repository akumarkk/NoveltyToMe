#include <iostream>
using namespace std;


// Catch block should immidiately follow try block
// Else compiler will not let compile the program

int
hmean(int a, int b)
{
    char *str = "Invalid arguments to hmean()";
    if(a == -b)
	//throw str;
	throw a;

    return ((2*a*b)/a+b);
}

int
main()
{
    int ret;
    int a = 10, b= -10;

    try
    {
	ret = hmean(a, b);
	cout << "hmean(a, b) = " << ret << endl;
    }

    //cout <<"Ran try successfully!" <<endl;
    //a = 20;

    catch(char *str)
    {
	cout << "Caught an exception : " << str<<endl;
    }

    cout << "Value of a = " <<a <<endl;

    return 0;
}

