#include <iostream>
#include <fstream>
using namespace std;
#include "class1.h"

Example::Example() {
    cout<<"This constructor is being called"<<endl;
    ofstream myfile("test_file.txt");
    myfile << "File is Initiated!";
    cout<<"File is Initiated!"<<endl<<endl;
    myfile.close();
}
	
Example::~Example() {
    cout<<"This destructor is being called"<<endl;
}
	
int Example::func() {
    cout << "Static member function called\n";
    //cout << "\nThe value of b is: " << b;
    string b;
    ifstream myfile("test_file.txt");
    getline(myfile, b);
    cout<< "content from file: " <<b<<endl;
    myfile.close();
    return 0;
}

int Example::writeToFile(string writeThis) {
    ofstream myfile;
    myfile.open("test_file.txt", ios_base::app);
    myfile << writeThis;
    cout<<"written to File: "<< writeThis <<endl;
    myfile.close();
}


