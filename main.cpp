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

// Global Constants and Structures:
struct stringy
{
	char* p_c_str; //points to a string
	int count; //length of string not counting '\0'
};

// Prototypes:

void show(const stringy& str, int n = 1);
template <typename T>
void show(const T& input, int n = 1);
void set(stringy& str, char* testing);

int main() 
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
}


// sets a stringy structures string and count
// Param: stringy& str, char testing[]
// TODO: solve for usign strcpy vs strcpy_s 
void set(stringy& str, char* testing)
{
	str.count = strlen(testing);
	str.p_c_str = new char[str.count + 1];
	strcpy_s(str.p_c_str, str.count + 1, testing);
}

// Prints the string in a stringy structure n times.
// Default: n = 1
// Param: stringy & str, int n
void show(const stringy& str, int n)
{

	for (int i = 0; i < n; i++)
	{
		std::cout << str.p_c_str << "\n";
	}
}

// Prints the string passed n times
// Default: n = 1
// Param: T* input, int n
template <typename T>
void show(const T& input, int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << input << "\n";
	}
}