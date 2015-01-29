#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int
generate_file(int n)
{
    int		i=0;
    ofstream	myfile;
    ifstream	readf;
    string	str;

    readf.open("test.txt");
    myfile.open("textfile.txt");

    while(i< n)
    {
	if(getline(readf, str))
	{
	    myfile<< i+1 << " : " << str << endl;
	    i++;
	}
	else
	{
	    cout<< "Resetting the seek pointer ... " << endl;
	    readf.close();
	    readf.open("test.txt");
	    readf.seekg(ios_base::beg);
	}
    }

    return i+1;
}
	

int
main()
{
    int n = 100;

    n = generate_file(n);
    cout<< "Generated a file with " << n << "lines" << endl;
    return 0;
}
