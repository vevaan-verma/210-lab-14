// COMSC-210 | Lab 14 | Vevaan Verma
using namespace std;
#include <iostream>
#include <string>

// class Color represents a color with red, green, and blue components
class Color {

private:
	int red;
	int green;
	int blue;

public:
	// getters and setters for the red component
	void setRed(int r) { red = r; }
	int getRed() const { return red; }

	// getters and setters for the green component
	void setGreen(int g) { green = g; }
	int getGreen() const { return green; }

	// getters and setters for the blue component
	void setBlue(int b) { blue = b; }
	int getBlue() const { return blue; }

	// print() prints the color in the format "Color: [VALUE]R, [VALUE]G, [VALUE]B"
	// arguments: none
	// returns: void
	void print() const { cout << "Color: " << red << "R, " << green << "G, " << blue << "B" << endl; }

};

// main() is the entry point of the program
// arguments: none
// returns: int - the exit code of the program
int main() {


}