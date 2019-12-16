#include <iostream>
#include <string>
#include "Header.h"

using namespace std;

//main function
int main()
{
	//variables are set astral year regulations
	int a = 18;
	int b = 9;
	int c = add(a, b);
	//display current year to user 
	cout <<"current astral year: " << c << endl;


	//functions are called from header file
	DisplayIntroduction();
	DisplayCurrentArea();
	DisplayNoise();
	


	system("pause");
	return 0;
}


