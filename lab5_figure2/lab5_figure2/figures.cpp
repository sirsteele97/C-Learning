#include <iostream>
#include "figures.h"

using std::cout; using std::endl;


void filledSquare(int num)
{
	for (int i = 0; i < num; ++i) {
		for (int j = 0; j < num; ++j)
			cout << "*";
		cout << endl;
	}

}
void leftTriangle(int num)
{
	for (int i = 0; i < num; ++i) {

		for (int j = 0; j < num; j++)
			if (j <= i)
				cout << "*";
		cout << endl;
	}

}
void rightTriangle(int num)
{
	for (int i = 1; i < num + 1; ++i) {

		for (int j = num; j > 0; j--)
			if (j <= i) {
				cout << "*";

			}
			else {
				cout << " ";;
			}
			cout << endl;

	}

}
void hallowSquare(int num)
{
	for (int i = 1; i < num + 1; ++i) {
		for (int j = num; j > 0; j--)
			if (i == 1) {
				cout << "*";

			}
			else if (i == num) {
				cout << "*";;
			}
			else if (j == num) {
				cout << "*";;
			}
			else if (j == 1) {
				cout << "*";
			}
			else
				cout << " ";
		cout << endl;

	}

}