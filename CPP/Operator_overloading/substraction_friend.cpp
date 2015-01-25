#include <iostream>
#include <string.h>

using namespace std;

class String 
{
    char str[512];
    static int count;

    public:
	String(char *s="Default value")
	{
	    count++;
	    strcpy(str, s);
	    cout << endl;
	    cout<< "Initialized str to : "<< s << endl;
	}

	~String()
	{
	    cout << endl;
	    cout<<"Destroying object string...   count = "<< count << endl;
	    cout<<"--------" << str << "---------" << endl;
	}

	friend String operator-(String s1, String s2);
};

int String::count = 0;

String operator-(String s1, String s2)
{
    String tmp("TEMP");
    int len = strlen(s2.str);

    cout <<"s1.str = " << s1.str <<"      " <<"s2.str = " <<s2.str <<endl;

    if(strncmp(s1.str, s2.str, len) == 0)
    {
	strcpy(tmp.str, s1.str+len);
    }
    else
    {
	strcpy(tmp.str, "NO DIFF");
    }

    cout<< "DIFF : " << tmp.str <<endl;

    return tmp;
}


int
main()
{
    String s1("Welcome to University of Utah"), s2("Welcome to"), s;

    s = s1 - s2;

    String s11("Win"), s22("The Game");
    s = s11 - s22;

    return 0;
}


    



