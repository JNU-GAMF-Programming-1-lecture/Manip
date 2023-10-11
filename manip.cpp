/*****
 * 
 * manip.cpp
 * 
 * Examples for manipulator usage.
 * 
 *****/

#include <iostream>  // cout, showbase, noshowbase, oct, dec, hex, uppercase, nouppercase, endl, left, right, boolalpha, noboolalpha, skipws, noskipws
#include <iomanip>   // setbase, setprecision, setw, setfill
#include <bitset>    // bitset

using namespace std; 
const int W = 50;

int main()
{
	int a = 15;
	// Display a horizontal line of '-' with a width of 50 characters.
	cout << setfill('-') << setw(W) << '-' << setfill(' ') << endl;
	// Display a header.
	cout << "15 in different number systems\n";
	// Display another horizontal line.
	cout << setfill('-') << setw(W) << '-' << setfill(' ') << endl;

	// Display 'a' in different number systems.
	cout << "Base-8 (octal): " << showbase << setbase(8) << a << endl;
	cout << "Base-8 (octal): " << noshowbase << oct << a << endl;
	cout << "Base-10 (decimal): " << showbase << dec << a << endl;
	cout << "Base-16 (hexadecimal): " << showbase << hex << a << endl;
	cout << "Base-16 (hexadecimal): " << showbase << hex << uppercase << a << endl;
	cout << "Base-16 (hexadecimal): " << showbase << hex << nouppercase << a << endl ;
	cout << "Base-2 (binary): " << bitset<8>(a) << endl << endl;

	// Display another horizontal line.
	cout << setfill('-') << setw(W) << '-' << setfill(' ') << endl;

	// Display another horizontal line.
	cout << setfill('-') << setw(W) << '-' << setfill(' ') << endl;
	// Display header for boolean values
	cout << "Boolean values in text and numerical representation" << endl;
	// Display another horizontal line.
	cout << setfill('-') << setw(W) << '-' << setfill(' ') << endl;

	// Display true in text and numerical representations
	cout << setw(25) << left << "Text" << " | " << boolalpha << true << endl;
	cout << noshowbase << dec;

	cout << setw(25) << left << "Numerical" << " | " << noboolalpha << true << endl;
	// Display another horizontal line.
	cout << setfill('-') << setw(W) << '-' << setfill(' ') << endl;

	const double pi = 3.1415926;
	double r = 536543483.3546988;
	double p = 2 * pi * r;

	// Display another horizontal line.
	cout << setfill('-') << setw(W) << '-' << setfill(' ') << endl;
	// Display header for circle data.
	cout << "Circle data" << endl;
	// Display another horizontal line.
	cout << setfill('-') << setw(W) << '-' << setfill(' ') << endl;

	// Display the radius and perimeter of the circle with scientific notation.
	cout << setw(25) << left << "Radius of the circle" << " | " << scientific << showpos << r << endl;
	cout << setw(25) << left << "Perimeter of the circle" << " | " << noshowpos << p << endl;

	// Display the perimeter of the circle with fixed-point notation and precision 4.
	cout << setw(25) << right << "Perimeter of the circle" << " | " << fixed << setprecision(4) << p << endl;

	// Display another horizontal line.
	cout << setfill('-') << setw(W) << '-' << setfill(' ') << endl;

	string firstname, middlename, lastname;

	// Input first name, middle name, and last name separated by 
	// spaces with whitespace skipping.
	cout << "Input with skipws" << endl;
	cout << "Enter first name, middle name and last name separeted by spaces: ";
	cin >> skipws >> firstname >> middlename >> lastname;
	cout << left << setw(15) << "First name: " <<  firstname << endl;
	cout << setw(15) << "Middle name: " << middlename << endl;
	cout << setw(15) << "Last name: " << lastname << endl;
	cin.ignore();
	
	// Input first name, middle name, and last name separated by 
	// spaces without whitespace skipping.
	cout << "\nInput with noskipws" << endl;
	cout << "Enter first name, middle name and last name separeted by spaces: ";
	cin >> noskipws >> firstname >> middlename >> lastname;
	cout << left << setw(15) << "First name: " << firstname << endl;
	cout << setw(15) << "Middle name: " << middlename << endl;
	cout << setw(15) << "Last name: " << lastname << endl;
	return 0;
}