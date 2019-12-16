
using namespace std;

string IntakeStringsToProcess(string promptForUser);
string IntakeNumbersToProcess(string promptForUser);

#pragma once
//provides user his name
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

//function will validate user input to see if a string used or not
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
			cout << "\n\n *** Check your journal if your having problems";
		}
		else
		{
			isInputInvalid = true;
		}
	} while (isInputInvalid == false);
	//continue while valid

	return resultFromUserInput;
}

//standard intro to user 
void DisplayIntroduction()
{
	cout << "\n\n\t****Welcome to Disturbance****\n";
	cout << "\nYour ship is stranded in deep space from an anomaly disturbance...\n";
	cout << "\nYour ship is powered off, you must turn its power back on...\n";
	cout << "\nYou hear some of your crew members screams echo through the vents...\n";
	cout << "\n\n\tYou are not alone\n";
}
// function provides a new choice to the user a decision that produces a noise(in text)
void DisplayNoise()
{
	cout << "\nAfter dusting yourself off you hear the ship come to a complete silence\n";
	cout << "\nTread carefully\n";
	string userChoice = IntakeStringsToProcess("\nHow do you proceed?\nPlease enter number of choice\n1 search the room closest to you\n2 Proceed down the hall");
	//user enters 1
	if (userChoice == "1")
	{
		cout << "\nYou find another crew mate bleeding out!\n";
		cout << "\nYou check her pulse it's very faint..." << endl;
		cout << "\nSomething drips on your head, you feel a wetness on the back of your skull.." << endl;
		cout << "\nYou've been lured here..." << endl;
		cout << "\nYour skull was bitten open..." << endl;

	}
	//user enters a 2
	else if (userChoice == "2")
	{
		cout << "\nYou proceed down the hall and trip, something heard you!" << endl;
		cout << "\nYou hear loud thuds proceed closer in your direction" << endl;
		cout << "\nThe steps disappear before reaching you" << endl;;
		cout << "\nYou feel a sharp pain behind your back" << endl;
		cout << "\nYou have been impailed by a razor sharp tail..." << endl;

	}
}
//basic addition function  that takes parameters 
int add(int a, int b)
{
	return a + b;
}