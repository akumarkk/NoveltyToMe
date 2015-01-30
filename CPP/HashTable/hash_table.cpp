#include <iostream>
#include <unordered_map>

using namespace std;

int
main()
{
    string key = "key_data", value="value_data";

    unordered_map<string, string> hashtable;
    //hashtable.emplace(key, value);
    
    hashtable.insert(make_pair(key, value));
    hashtable.insert(make_pair("key1", "value1"));
    hashtable.insert(make_pair("key2", "value2"));

    cout<<"Value = " << hashtable[key] << endl;
    cout << "make_pair = " << make_pair("key2", "value2").first <<endl;

    for(auto i=hashtable.begin(); i!= hashtable.end(); i++)
    {
	cout<< i->first << " : " << i->second << endl;
    }
    return 0;
}
