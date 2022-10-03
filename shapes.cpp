// shapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Name: Peightyn Boyd
//Date: 9/26/2022
//Program Title: shapes
//Program Description: Using If Else to give the operator the decision on what area they would like to
// calculate, whether it is to find the area of a Rectangle, Circle, or Triangle by choosing a
// corresponding number connected to the shape. 


#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std; 

//Named Constants
double const PI = 3.14; 

int main()
{
	// Variable declaration

	int choice;
	double recArea, recWidth, recLength; 
	double cirArea, cirRadius; 
	double triArea, triHeight, triBase; 

	//Program title and description for the user

	cout << "Program Title: \'shapes\'" << endl;
	cout << "Program Description: Using If Else to give the operator the decision on what area they would like to " << endl; 
	cout << "calculate, whether it is to find the area of a Rectangle, Circle, or Triangle by choosing a corresponding" << endl; 
	cout << "number connected to the shape." << endl; 
	cout << endl << endl; 


	// User input

	cout << "Choose the corresponding number for the area you would like to calculate: " << endl;
	cout << "1 - Rectangle Area" << endl;
	cout << "2 - Circle Area" << endl;
	cout << "3 - Triangle Area" << endl;
	cout << "Enter selected number here: ";
	cin >> choice;
	cout << endl; 


	// Output to the screen

	if (choice == 1)
	{
		//User Input for "Finding a Rectangle's Area"
		cout << "Perform task #1 : Finding a Rectangle's area" << endl;
		cout << "Enter the Rectangle's Length: "; 
		cin >> recLength; 
		cout << "Enter the Rectangle's Width: "; 
		cin >> recWidth; 
		cout << endl; 

		//Calculations 
		recArea = recLength * recWidth; 

		system("cls");

		//Output to the Screen 
		cout << fixed << showpoint << setprecision(1);

		cout << setw(25) << left << "Rectangle's Length:" << recLength << setw(10) << right << "Inches" << endl; 
		cout << setw(25) << left << "Rectangle's Width:" << recWidth << setw(10) << right << "Inches" << endl; 
		cout << setw(25) << left << "Rectangle's Area:" << recArea << setw(17) << right << "Inches Squared" << endl; 
	
	}
	else if (choice == 2)
	{
		cout << "Perform task #2 : Finding a Circle's area" << endl;
		cout << "Enter the Circle's Radius: ";
		cin >> cirRadius;
		
		//Calculations 
		cirArea = (PI * cirRadius * cirRadius); 

		system("cls");

		//Output to the Screen 
		cout << fixed << showpoint << setprecision(1);

		cout << setw(25) << left << "Circle's Radius:" << cirRadius << setw(10) << right << "Inches" << endl;
		cout << setw(25) << left << "Circle's Area:" << cirArea << setw(17) << right << "Inches Squared" << endl;

	}
	else if (choice == 3)
	{
		cout << "Perform task #3 : Finding a Triangle's area" << endl;
		cout << "Enter the Triangle's Base: ";
		cin >> triBase;
		cout << "Enter the Triangle's Height: ";
		cin >> triHeight;
		cout << endl;

		//Calculations 
		triArea = triBase * triHeight;

		system("cls");

		//Output to the Screen 
		cout << fixed << showpoint << setprecision(1);

		cout << setw(25) << left << "Triangle's Base:" << triBase << setw(10) << right << "Inches" << endl;
		cout << setw(25) << left << "Triangle's Height:" << triHeight << setw(10) << right << "Inches" << endl;
		cout << setw(25) << left << "Triangle's Area:" << triArea << setw(17) << right << "Inches Squared" << endl;

	}
	else
		cout << "Input error; program terminating" << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
