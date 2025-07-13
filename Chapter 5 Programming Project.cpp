// Chapter 5 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include <cmath>
using namespace std;
int main()
{
    bool VALID = false;
    int GUESS;
    while (!VALID) {
        cout << "Guess the random number!\n";
        random_device first;
        uniform_int_distribution<int> randomReal(0, 50);
        cin >> GUESS;
        int Count=0;
        Count++;
        if (GUESS == randomReal(first))
        {
            cout << "Congratulations!\n";
            cout << "You Guessed correctly\n";
          
            cout << Count << " Tries!\n";
            bool VALID = true;


        }

        else if (GUESS > randomReal(first)){

            cout << "Sorry, your guess is incorrect\n";
        cout << "Your guess was too high\n";
        cout << "Try Again\n";
        cin.clear();
        
        }


        else if (GUESS < randomReal(first)) {


            cout << "Sorry, your guess is incorrect\n";
            cout << "Your guess was too low\n";
            cout << "Try Again\n";

            cin.clear();




        }







    }










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
