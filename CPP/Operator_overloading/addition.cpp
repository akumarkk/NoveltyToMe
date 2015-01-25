#include <iostream>
using namespace std;



// Binary operators take one argument as object with respect to which it is
// called will be the implicite first operand and other passed argument will become the
// second argument;
//
// So s = s1 + s2 
// =====>   s1.operator+(s2);  
// In the above statement, operator+ is invoked wrt to s1 and s2 is passed as ag argument to it.


class String
{
    public:
	char str[512];

	String operator + (String s2);

	// This is wrong as :
	//	     overloaded 'operator+' must be a unary or binary operator (has 3 parameters)
	//String operator + (String s1, String s2);
    	/*{
	    String tmp;
	    strcpy(tmp.str, s1.str);
	    strcat(tmp.str, s2.str);

	    return tmp;
	}*/

};

String String::operator + ( String s2)
{
    String tmp;
    cout<<"Adding strings : "<< str << "and " <<s2.str <<endl;
    strcpy(tmp.str, str);
    strcat(tmp.str, s2.str);
    return tmp;
}

int
main()
{
    String s1, s2;
    strcpy(s1.str, "University of Utah, ");
    strcpy(s2.str, "Salt Lake City");

    String s = s1 + s2;
    cout<< "Final String : "<<s.str<<endl;

    return 0;
}
