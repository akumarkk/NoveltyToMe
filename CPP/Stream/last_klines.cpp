#include <iostream>
#include <fstream>

using namespace std;

int
read_klines(int k)
{
    int		i=0;
    string	*str = new string[k];
    ifstream	myfile;
    string	s;

    myfile.open("textfile.txt");

    while(getline(myfile, s))
    {
	str[i] = s;
	i++;
	if(k == i)
	    i = 0;
    }

    cout << "----------- BUFFER CONTENTS -------------" << endl;
    for(i=0; i<k; i++)
	cout << str[i] << endl;

    return k;
}

int
main()
{
    int k=0;
    cout<< " Value of k : ";
    cin>>k;

    read_klines(k);
    return 0;
}
