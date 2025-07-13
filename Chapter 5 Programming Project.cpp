// Chapter 5 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <fstream> 
#include <random>
#include <string>
using namespace std;

int main()
{

    string NAME, FIRST, LAST;

    ifstream
        inputFile("Lineup.txt");
    int count = 0;
    
    if (!inputFile) {


        cout << "error opening file\n";
    }
    else {

        while (getline(inputFile, NAME)) {

            if (count == 0) {

                FIRST = LAST = NAME;




            }
            else {
                if (NAME < FIRST)
                    FIRST = NAME;
                if(NAME > LAST)

                    LAST = NAME;




            }


            count++;




        }

        inputFile.close();

        cout << "Number of students:\t" << count << endl;
        cout << "Front of line      \t" << FIRST << endl;
        cout << "End of line        \t" << LAST << endl;


















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
