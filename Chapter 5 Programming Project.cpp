// Chapter 5 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <fstream> 
#include <random>
#include <string>
using namespace std;
//this program will look for a file, then user must assign the nmae, and lastly will output stars represeting the population
int main()
{

    string NAME, TOWN;
    int YEAR = 1900;
        int pop;//variable for population, will use file info for this
    int INTERVAL = 20;

    cout << "what is name of file?\n";
    cin >> NAME;
        cout << "enter town name\n";

        cin.ignore();//had an issue and this fixed it, there was a stampede of text from later on in the program and this stopped it

        getline(cin, TOWN);





    ifstream//allows use of file, very important
        FILE(NAME);//names the file for further use

        
        
        if (!FILE) {//error message incase of wrong file or if file didn't open correctly

            cout << "Error opening file";
            return 0;
        }


        cout << TOWN << " Growth\n";
        //these \n make things more readible at the end 

        cout << "(Each Star is 1000 People)\n";//output part


        while (FILE >> pop) {//looping to count the starts

            cout << YEAR << " ";//output, part of it


            for (int p = 0; p < pop / 1000; p++) {//calculation because each star is 1k

                cout << "*";




            }


            cout << "\n";
                YEAR += INTERVAL;












            }





        FILE.close();//closing file, very important
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
