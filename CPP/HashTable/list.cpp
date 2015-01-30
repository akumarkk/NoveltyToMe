#include <string>
#include <list>
#include <iostream>

using namespace std;

int
main()
{
    int count = 0;
    list<string> slist(4, "Hello");

    slist.push_front("Welcome");
    slist.push_back("Utah");

    list<string>::iterator i;
    for(i=slist.begin(); i!= slist.end(); i++)
    {
	cout<< "Count = " << count <<" :    " << *i << endl;
	count++;
    }

    slist.pop_front();

    cout <<endl <<"After removing" << endl;
    count = 0;
    for(i=slist.begin(); i!= slist.end(); i++)
    {
	cout<< "Count = " << count <<" :    " << *i << endl;
	count++;
    }

    return 0;
}
