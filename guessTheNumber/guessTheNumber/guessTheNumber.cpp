#include "pch.h"
#include "windows.h"
//needed for random number
#include <cstdlib>
//needed for string
#include <string>
#include <iostream>
using namespace std;

int main()
{
	int n;
	int tries;
	string leChoice;

	

	system("Title Number Guessing Game");

	leChoice = "yup";

	while (leChoice == "yup")
	{

		cout << "Guess a whole number from 1 to 10: \n";
		//sets the random integer from 0-10
		n = 0;
		n = rand() % 10;
		n = n + 1;
		//resets tries
		tries = 0;
		//initialize guess in scope
		int guess;
		guess = -1;

		while (guess != n && tries <= 3)
		{

			cout << 3 - tries;
			cout << " tries remaining" << "\n";
			cout << "Guess: ";
			cin >> guess;

			//checking user input
			while (cin.fail()) 
			{
				//cleaning cin buffer else cin wont work on next variable
				cin.clear();
				cin.ignore(999, '\n');

				cout << "\n" << "Invalid guess." << "\n";
				cout << "Guess: ";
				cin >> guess;
			}
			


			//increment tries
			tries = ++tries;

			//checks the total attempts
			if (tries == 3 && guess != n)
			{
				cout << "You lose.";
				cout << "\n" << "The number was: " << n << endl;
				system("PAUSE");
				break;
			}

			//checks win condition
			if (guess == n)
			{
				cout << "You Win!" << "\n";
				system("PAUSE");
				break;
			}

		}

		system("CLS");

		cout << "\n" << "Would you like to play again? (yup/nah)" << "\n";
		cin >> leChoice;

		//checking inputs
		while (leChoice != "yup" && leChoice != "nah")
		{
			cout << "Invalid response";
			cout << "Would you like to play again? (yup/nah)" << "\n";
			cin >> leChoice;
		}

		system("CLS");

	}

	cout << "Thank you for playing!" << "\n";
	system("PAUSE");
	return 0;
}
