// COMSC-210 | Lab 14 | Vevaan Verma
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>

// class Color represents a color with red, green, and blue components
class Color {

private:
	int red;
	int green;
	int blue;

public:
	// getter and setter for the red component
	void setRed(int r) { red = r; }
	int getRed() const { return red; }

	// getter and setter for the green component
	void setGreen(int g) { green = g; }
	int getGreen() const { return green; }

	// getter and setter for the blue component
	void setBlue(int b) { blue = b; }
	int getBlue() const { return blue; }

	// print() prints the color in the format "Color: [RED VALUE], [GREEN VALUE], [BLUE VALUE]"
	// arguments: none
	// returns: void
	void print() const {

		cout << "RGB Code: " << setw(3) << red << ", " << setw(3) << green << ", " << setw(3) << blue << endl;

	}

};

// main() is the entry point of the program
// arguments: none
// returns: int - the exit code of the program
int main() {

	Color red;
	red.setRed(255);
	red.setGreen(0);
	red.setBlue(0);

	Color green;
	green.setRed(0);
	green.setGreen(255);
	green.setBlue(0);

	Color blue;
	blue.setRed(0);
	blue.setGreen(0);
	blue.setBlue(255);

	Color orange;
	orange.setRed(255);
	orange.setGreen(165);
	orange.setBlue(0);

	Color purple;
	purple.setRed(128);
	purple.setGreen(0);
	purple.setBlue(128);

	red.print();
	green.print();
	blue.print();
	orange.print();
	purple.print();

}