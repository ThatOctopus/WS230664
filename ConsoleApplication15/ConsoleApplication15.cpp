// ConsoleApplication15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <ofstream>
using namespace std;


int main()
{
	int i = 1;
	string sLine;
	do {
		ofstream myfile;
		myfile.open("dog-control-order.csv");
		if (myfile.is_open())
		{
			cout << "file is open";
			system("pause");
			while ( getline (myfile,sLine))
		}
		else
		{
			cout << "File did not open";
			system("pause");
			i = 0;
		}
			} while (i = !0);
	return 0;
}

