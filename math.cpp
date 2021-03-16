//******************************************************************** 
// Name: Kathryn Compton
// Class: COSC 1435 Fall 20
// Instructor: Marwa Hassan
// Assignment 6 Problem 3
// Date: 10/30/20
// Program description: a simple math application for elementary school 
// students to practice addition, subtraction, and multiplication. the user
// chooses what to practice from a menu, which displays an appropriate practice
// problem. the numbers used in the practice problems are randomly generated.
// if the user answers correctly, they are congratulated; if they are incorrect,
// the correct answer is displayed. after each problem, the menu is displayed 
// again until the user quits.
//*********************************************************************

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

// function prototypes
void add();
void sub();
void mult();

int main() // contains menu that leads to math problem functions and goodbye message
{
	// define variable for menu choice
	int menuChoice;
	
	// display menu at least once, keep showing after each choice until user quits
	do{
		cout << "math practice menu:\n";
		cout << "-------------------\n";
		cout << "1. addition\n";
		cout << "2. subtraction\n";
		cout << "3. multiplication\n";
		cout << "4. quit\n";
		cout << "-------------------\n\n";
		cout << "what do you want to practice? (choose an option 1-4): ";
		cin >> menuChoice;
		
		// validate menu choice
		while (menuChoice != 1 && menuChoice != 2 && menuChoice != 3 && menuChoice != 4)
		{
			cout << "please choose a valid option (1 2 3 or 4 only): ";
			cin >> menuChoice;
		}
		
		// call corresponding function for chosen menu choice
		switch (menuChoice)
		{
			case 1: add();
				    break;
			case 2: sub();
					break;
			case 3: mult();
					break;
		}
	}while (menuChoice != 4); // when the user chooses to quit, display goodbye message
	cout << "goodbye, thank you for using math practice \n";

	return 0;
}


void add() // generate random addition problem with both operands in 1 - 500 range
{
	// define variables for math problem values
	int num1, num2, correct, answer;
	cout << "\n------------------\n";
	cout << "addition practice: \n\n";
	
	// generate random numbers for problem
	unsigned seed = time(0);
	srand (seed);
	const int MIN_VALUE = 1;
	const int MAX_VALUE = 500;
	num1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	num2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	
	// calculate correct answer
	correct = num1 + num2;

	// display problem and obtain answer
	cout << " " << setw(4) << num1 << endl; 
	cout << "+" << setw(4) << num2 << endl;
	cout << " ----" << endl << " ";
	cin >> answer;

	// display appropriate message based on user's answer
	if (answer == correct)
	{
		cout << "\ncorrect! great job!\n\n";
	}
	else // if answer is incorrect
	{
		cout << "\nincorrect! sorry!\ncorrect answer is: " << correct << endl <<endl;
	}
}


void sub() // generate random subtraction problem with 1st operand in 1 - 499 range
		   // and 2nd operand in 1 - 100 range
{
	// define variables for math problem values
	int num1, num2, correct, answer;
	cout << "\n-------------------\n";
	cout << "subtraction practice: \n\n";
	
		// generate random numbers for problem
	unsigned seed = time(0);
	srand (seed);
	const int MIN_VALUE1 = 1;
	const int MAX_VALUE1 = 499;
	const int MIN_VALUE2 = 1;
	const int MAX_VALUE2 = 100;
	num1 = (rand() % (MAX_VALUE1 - MIN_VALUE1 + 1)) + MIN_VALUE1;
	num2 = (rand() % (MAX_VALUE2 - MIN_VALUE2 + 1)) + MIN_VALUE2;
	
	// calculate correct answer
	correct = num1 - num2;

	// display problem and obtain answer
	cout << " " << setw(4) << num1 << endl; 
	cout << "-" << setw(4) << num2 << endl;
	cout << " ----" << endl << " ";
	cin >> answer;
	
	// display appropriate message based on user's answer
	if (answer == correct)
	{
		cout << "\ncorrect! great job!\n\n";
	}
	else // if answer is incorrect
	{
		cout << "\nincorrect! sorry!\ncorrect answer is: " << correct << endl << endl;
	}
}


void mult() // generate random multiplication problem with 1st operand in 1 - 100 range
  			// and 2nd operand in 1 - 9 range
{
	// define variables for math problem values
	int num1, num2, correct, answer;
	cout << "\n----------------------\n";
	cout << "multiplication practice:\n\n";
	
	// generate random numbers for problem
	unsigned seed = time(0);
	srand (seed);
	const int MIN_VALUE1 = 1;
	const int MAX_VALUE1 = 100;
	const int MIN_VALUE2 = 1;
	const int MAX_VALUE2 = 9;
	num1 = (rand() % (MAX_VALUE1 - MIN_VALUE1 + 1)) + MIN_VALUE1;
	num2 = (rand() % (MAX_VALUE2 - MIN_VALUE2 + 1)) + MIN_VALUE2;
	
	// calculate correct answer
	correct = num1 * num2;

	// display problem and obtain answer
	cout << " " << setw(4) << num1 << endl; 
	cout << "x" << setw(4) << num2 << endl;
	cout << " ----" << endl << " ";
	cin >> answer;
	
	// display appropriate message based on user's answer
	if (answer == correct)
	{
		cout << "\ncorrect! great job!\n\n";
	}
	else // if answer is incorrect
	{
		cout << "\nincorrect! sorry!\ncorrect answer is: " << correct << endl << endl;
	}
}