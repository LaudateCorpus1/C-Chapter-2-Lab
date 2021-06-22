/**
 * Author: Jim
 * Description: Calculate the rectangle...
 * Due Date: 6/16/2021
 */
#include <iostream>
#include <string>

using namespace std;

int main() {	
	// Primitive datatype: char, bool, int, long, float, double...

	// variables....
	float length;
	float width;
	
	// User inputs..., example cin object	
	cout << "Please enter length for a rect: ";
	cin >> length;
	cout << "Please enter width for a rect: ";
	cin >> width;
	
	// Calculation or processing
	long area = static_cast<long>(length * width);
	float perimeter = static_cast<double>(2 * length + 2 * width); // 2 * (length + width)
	string name = "Jim";
	// Output
	cout << "Author: " << name << endl;
	cout << "Length = " << length << endl;
	cout << "Width = " << width << "\n";
	cout << "Area = " << /** area */ static_cast<double>(length * width) << endl;
	cout << "Perimeter = " << /** perimeter */ static_cast < double>(2 * (length + width)) << endl;
	
	return 0;
}