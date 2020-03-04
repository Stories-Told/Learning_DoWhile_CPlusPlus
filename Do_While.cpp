#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

// Global constant for pi value
const double pi = 3.14;

// Forward declarations
void Calculate_Circle_Area();
void Calculate_Area_Rectangle();
void Average_Of_Sum();

int main()
{
    // Creating menu driven Do While loop
	char selection = ' ';

	// Do-while loop in order to drive a menu based program.
	// Will keep running until user enters q or Q
	do
	{
		cout << "1.) Calculate radius of a circle" << endl;
		cout << "2.) Calculate area of a rectangle" << endl;
		cout << "3.) Calculate average of a set of numbers" << endl;
		cout << "Q.) Quit" << "\n\n";

		cout << "Selection: ";
		cin >> selection;

		// Switch statement in order to act based on what the user selected
		switch (selection)
		{
		case '1':
			system("CLS");
			Calculate_Circle_Area();
			break;

		case '2':
			system("CLS");
			Calculate_Area_Rectangle();
			break;

		case '3':
			system("CLS");
			Average_Of_Sum();
			break;

		case 'q':
			system("CLS");
			cout << "EXITING...";
			break;

		case 'Q':
			system("CLS");
			cout << "EXITING...";
			break;

		default:
			system("CLS");
			cout << "INVALID SELECTION..." << "\n\n";
		}

	} while (selection != 'q' && selection != 'Q'); // Will run the DO loop until user enters q or Q

	return 0;
}

// Function to calculate the area of a circle
void Calculate_Circle_Area()
{
	double area;
	double radius;
	char yesOrNo = ' ';

	do
	{
		cout << "Enter the radius of the circle: ";
		cin >> radius;

		area = pi * (radius * radius);

		cout << "Area of circle = " << area << endl;

		cout << "Do you want to calculate another circle?(Y/N): ";
		cin >> yesOrNo;
		cout << endl;

		// Clears the console screen
		if (yesOrNo == 'n' || yesOrNo == 'N')
		{
			system("CLS");
		}

	} while (yesOrNo != 'n' && yesOrNo != 'N');
	
}

// Function to calculate area of a rectangle
void Calculate_Area_Rectangle()
{
	double area;
	double width, length;
	char yesOrNo = ' ';

	do
	{
		cout << "Enter the length of the rectangle: ";
		cin >> length;
		cout << "Enter the width of the rectangle: ";
		cin >> width;

		area = length * width;

		cout << "Area of the rectangle = " << area << endl;

		cout << "Do you want to calculate another circle?(Y/N): ";
		cin >> yesOrNo;
		cout << endl;

		// Clears the console screen
		if (yesOrNo == 'n' || yesOrNo == 'N')
		{
			system("CLS");
		}

	} while (yesOrNo != 'n' && yesOrNo != 'N');
}

// Function utilzing a vector to calculate the average of a set of user input numbers
void Average_Of_Sum()
{
	char yesOrNo = ' '; // Stores user response of yes or no 

	int amount = 0; // Used to ask the user how many numbers they want to enter
	double sum = 0; // Stores the sum of all the numbers in the vector
	double average = 0; // Stores the average of all the numbers

	double num; // Used for adding the user number into the vector
	vector<double> numbers;

	// Keep doing the loop until user enters n or N
	do
	{
		cout << "Enter the amount of numbers you want to enter: ";
		cin >> amount;

		// For loop to allow user to add all of their numbers
		for (int i = 0; i < amount; i++)
		{
			cout << "Number to add to SUM: ";
			cin >> num;
			numbers.push_back(num);
		}
		// Using a range-based for loop in order to add the sum of all the numbers in the vector
		for (auto addTogether : numbers)
		{
			sum += addTogether;
		}

		average = sum / amount;

		cout << "The average of all the numbers you entered is: " << average << endl;

		cout << "Do you want to calculate another circle?(Y/N): ";
		cin >> yesOrNo;
		cout << endl;

		// Clears the console screen
		if (yesOrNo == 'n' || yesOrNo == 'N')
		{
			system("CLS");
		}

	} while (yesOrNo != 'n' && yesOrNo != 'N'); // Will quit the loop if user enters n or N


}

