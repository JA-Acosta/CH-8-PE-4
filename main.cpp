// JAAR
// 06/05/2023
// C++ Primer Plus 6th Ed
// CH 8 Program Ex 4
// Version 1

// Updates:

// Future goals:

// Potential Use cases/errors:

// ------------------------------ Prompt---------------------------------------
// Complete the program skeleton
// Two show functions each with default arguments, const when appropriate
// set should use new to allocate space.
// may have to delete header and using based on compiler.
// ------------------------------ Prompt---------------------------------------

// Headers:
#include <iostream>
#include <cstring> // strlen(), strcpy()

using namespace std;

// Global Constants and Structures:
struct stringy
{
	char* str; //points to a strong
	int count; //length of string not counting '\0'
};

// Prototypes:
// set(), show(), and show()

int main() 
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing); // first argument is a ref, allocates space to hold
	// copy of testing. set str member of beany to point to the new block, copies
	// testing to new block, and sets count member of beany.
	show(beany); // prints member of string once
	show(beany, 2); // prints member of string twice
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
}