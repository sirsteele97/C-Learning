#include <iostream>
#include "figures.h"

using std::cin; using std::cout; using std::endl;

int main() {
	
	int exit = 1; //establishes exit to always equel 1

	// loops the shape definer
	while (exit != 0) { 
		cout << "output a number: "; // gets value for num
		int num;
		cin >> num;

		cout << "select a shape" << endl;
		cout << "1. Square" << endl;
		cout << "2. triangle" << endl;
		int shape;
		cin >> shape; // gets value for shape

		switch (shape) {
		case 1: cout << "filled or hallow? (F/H): ";
			char fill;
			cin >> fill; // gets vlaue for fill

			switch (fill) {
			case 'F':  filledSquare(num); //runs filledSquare function
				break;
			case 'H':	hallowSquare(num); //runs hallowSquare function
				break;
			}
			break;

		case 2: cout << "Right or left sided triangle? (R/L): "; // gets value for side
			char side;
			cin >> side;
			switch (side) {
			case 'R':	rightTriangle(num); //runs rightTriangle function
				break;
			case 'L':	leftTriangle(num); //runs rightTriangle function
				break;
			}
			break;

		default: exit = 0; // any other number but 1 and 2 will break loop
		}
	}
}
