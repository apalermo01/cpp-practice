// data structure: group of data elements grouped together under one name.
// data elements = members
// declared using struct

#include <iostream>
#include <string>
#include <sstream>
// using namespace std;

struct movies_t {
	std::string title;
	int year;
} mine, yours;

void printmovie(movies_t movie);

int struct_ex1()
{
	std::string mystr;
	mine.title = "2001 A Space Odyssey";
	mine.year = 1968;

	std::cout << "Enter title: ";
	std::getline (std::cin, yours.title);

	std::cout << "Enter years: ";
	std::getline (std::cin, mystr);
	std::stringstream(mystr) >> yours.year;

	std::cout << "My favorite movie is:\n";
	printmovie (mine);
	std::cout << "And yours is:\n";
	printmovie (yours);
	return 0;
}

void printmovie (movies_t movie)
{
	std::cout << movie.title;
	std::cout << " (" << movie.year << ")\n";
}

// Pointers to structures
// an example that mixes pointers and structures
int main ()
{
	std::string mystr;

	movies_t amovie;
	movies_t * pmovie;
	pmovie = &amovie;

	std::cout << "Enter title: ";
	std::getline (std::cin, pmovie->title);
	std::cout << "Enter year: ";
	std::getline (std::cin, mystr);
	(std::stringstream) mystr >> pmovie -> year;

	std::cout << "\nYou have entered:\n";
	std::cout << pmovie->title;
	std::cout << " (" << pmovie->year << ")\n";

	return 0;
}

// arrow operator: -> dereference operator that is used exclusively wtih pointers to objects that have members.
// Accesses the member of an object directly from its address
//
// pmovie ->
// is equivalent to
// (*pmovie).
//
// note: can also nest structures
