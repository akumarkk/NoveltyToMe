#include <iostream>
#include <fstream>

using namespace std;

int
write_file(char *str)
{
    char	buff[1024] = "";
    ofstream	myfile;
    int		lines = 0;

    myfile.open(str);

    while(true)
    {
	cout<< "Data to write : ";
	cin>> buff;
	cout <<"-------" << buff << "---------" << endl;

	if(strcmp(buff, "exit") == 0)
	{
	    myfile<< "Good bye!!!";
	    myfile.close();
	    break;
	}

	myfile<<buff;
	lines++;
    }

    return lines;
}

int
main()
{
    int  ret = 0;
    char file[256] = "";
    cout<< "File name : ";
    cin>> file;

    ret = write_file(file);
    cout <<"Written " << ret << "lines into file " << endl;

    return 0;
}
