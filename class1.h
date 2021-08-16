#include <iostream>
#include <fstream>
using namespace std;
class Example {
public :
   	static int a;
	Example();
	~Example();
	static int func();
    static int writeToFile(string writeThis);
};