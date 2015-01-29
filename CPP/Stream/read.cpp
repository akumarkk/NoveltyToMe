#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int
read_file(char *file)
{
    int	    line=0;
    //char    buff[1024] = "";
    string  buff;

    ifstream myfile;
    myfile.open(file);

    while(getline(myfile, buff))
    {
	cout << buff << endl;
	line++;
    }

    return line;
}

int
main()
{
    int ret;
    char file[256] = "";

    cout<< "FILE NAME : ";
    cin>> file;
    
    ret = read_file(file);
    cout <<"Read " << ret << " lines" << endl;
    return 0;
}
