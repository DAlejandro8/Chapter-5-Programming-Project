// Chapter 5 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;


//this program will calculate the size of population and display the size for each day
int main()
{
   //I will assume the user will not only put in integers, except for days
	double SIZE;//this is the variable for the final answer; the size of population
	double AVE;// this will be a percentage and the program will convert it into a decimals later on
	int DAYS;//ineger as the loop will have to display a value for each day, so an error may occur if a whole number is not in operation
	double START;//this will be the original number of organisms
	//all of these are for the checks for each variable and if they align will the parameter
	bool valid = false;
	bool VALID = false;
	bool valid3 = false;

	while (!valid) {//will continue in a loop if the starting population is less than 2
		cout << "Enter the starting population \n";
		cin >> START;

		if (START > 2)//needs to be greater than 2 to function
		{
			valid = true;




		}

		else {

			cout << "Error, enter a value greater than 2 \n";

			cin.clear();//creates loop
			cin.ignore(1000000000, '\n');




		}













	}


	//basically same code as before
	while (!VALID) {//will continue in a loop if a negative increase
		cout << "Enter their average population increase (as a percentage) \n";
		cin >> AVE;

		if (AVE >= 0)//Can't be negative to function
		{
			VALID = true;




		}

		else {

			cout << "Error, enter a positive value \n";

			cin.clear();
			cin.ignore(1000000000, '\n');




		}













	}



	//basically same code as before
	while (!valid3) {//will continue in a loop if value is less than 1
		cout << "Enter the number of days \n";
		cin >> DAYS;

		if (DAYS >= 1)//Can't be negative to function
		{
			valid3 = true;




		}

		else {

			cout << "Error, enter a value greater than or equal to 1 \n";

			cin.clear();
			cin.ignore(1000000000, '\n');




		}













	}

	//this will create the output 
	//this loop will print the text for each day


	double pop = START;
	double PERC = 100;         //this is because to convert to a decimal, a percentage has to be divided by 100
	double ONE=1;// the days has to start from one
	double NUM;

	cout << "DAY \t POPULATION \n";// these are just headers for the output.


	for (NUM = ONE; NUM <= DAYS; NUM++) {//will repeat until the inputted days multplied has been reached

		pop = pop * (1 + AVE / PERC);//the math for the final population of each day

		cout << NUM << " \t " << pop << endl;// the output




	}
















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
