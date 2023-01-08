#include <iostream>
#include<cmath>
using namespace std;

// Constants:
#define MONTH "01"
#define YEAR "2023"
#define DAY "01"

int globalGreetingNumber = 10;

int main(int argc, char *argv[]) {
	cout << "William C++ Training \n";
	cout << "Date: ";
	cout << DAY; 
	cout << "-"; 
	cout << MONTH;
	cout << "-";
	cout << YEAR;
	cout << "\n Global Greeting Number: ";
	cout << globalGreetingNumber;
	int localGreetingNumber = globalGreetingNumber + 7;
	cout << "\n Local Greeting Number: ";
	cout << localGreetingNumber;
	cout << "\n Pow of Local Greeting Number: ";
	cout << pow(localGreetingNumber, 2);
	
	// Strings:
	string wordA = "My word";
	cout << "\n String A: ";
	cout << wordA;
	cout << "\n Last character of String A: ";
	cout << wordA[wordA.length() -1];
	cout << "\n Concatenations of Strings: ";
	string wordB = " matters for who is receptive";
	cout << wordA + wordB;
	return 0;
}

