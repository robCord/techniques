#include <iostream>
#include <string>


using namespace std;

void DisplayIntroduction();
void DisplayCurrentArea();
void DisplayNoise();

string IntakeStringsToProcess(string promptForUser);
string IntakeNumbersToProcess(string promptForUser);

//main function
int main()
{
	DisplayIntroduction();
	DisplayCurrentArea();
	DisplayNoise();



	system("pause");
	return 0;
}


void DisplayCurrentArea()
{
	cout << "\nAfter coming to your senses you must gather your bearings.\n";
	cout << "\nDo you remember your name?\n";
	string survivorID = IntakeStringsToProcess("\nEnter your name\n");
	cout << "\nAfter checking your pockets, you find your ID\n";
	cout << survivorID << ", you must return the power back to ship and investigate the anomaly\n";
}

string IntakeNumbersToProcess(string promptForUser)
{
	string resultFromUserInput = "";
	//checks to see if the user has a valid input
	bool isInputInvalid = false;

	//input loop
	do
	{
		//prompt user for input
		cout << promptForUser << endl;
		//Actually get input 
		getline(cin, resultFromUserInput);
		//check for valid input
		if (resultFromUserInput == "")
		{
			cout << "\n\n *** Unrecognized input *** Please try again.";
			cout << "\n\n *** Check your journal if your having problems ***";
		}
		else
		{
			isInputInvalid = true;
		}
	} while (isInputInvalid == false);
	//continue while valid

	return resultFromUserInput;
}

string IntakeStringsToProcess(string promptForUser)
{
	string resultFromUserInput = "";
	//checks to see if the user has a valid input
	bool isInputInvalid = false;

	//input loop
	do
	{
	//prompt user for input
	cout << promptForUser << endl;
	//Actually get input 
	getline(cin, resultFromUserInput);
	//check for valid input
	if (resultFromUserInput == "")
	{
		cout << "\n\n *** Unrecognized input *** Please try again.";
		cout << "\n\n *** Check your journal if your having problems ***";
	}
	else
	{
		isInputInvalid = true;
	}
	} while (isInputInvalid == false);
	//continue while valid
	
	return resultFromUserInput;
}


void DisplayIntroduction()
{
	cout << "\n\n\t****Welcome to Disturbance****\n";
	cout << "\nYour ship is stranded in deep space from an anomaly disturbance...\n";
	cout << "\nYour ship is powered off, you must turn its power back on...\n";
	cout << "\nYou hear some of your crew members screams echo through the vents...\n";
	cout << "\n\n\tYou are not alone\n";
}

void DisplayNoise()
{
	cout << "\nAfter dusting yourself off you hear the ship come to a complete silence\n";
	cout << "\nTread carefully\n";
	string userChoice;
	IntakeNumbersToProcess("\nHow do you proceed?\nPlease enter number of choice\n1 search the room closest to you\n2 Proceed down the hall");

	if(userChoice == "1")
	{
		cout << "You find another crew mate bleeding out!\n";
	}
	else if(userChoice == "2")
	{
		cout << "You proceed down the hall and trip, something heard you!";
	}
}
