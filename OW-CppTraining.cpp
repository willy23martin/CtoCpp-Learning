#include <iostream>
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
	return 0;
}

