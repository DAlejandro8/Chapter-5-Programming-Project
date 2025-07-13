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
    random_device first;//sort the number generator
    uniform_int_distribution<int> randomReal(0, 100);//the bounds of generator 1-100
    
    int Count = 0;//counter starts at 0
    
    int CORRECT = randomReal(first);
    while (!VALID) {//loop until right
        cout << "Guess the random number!\n";
        
        cin >> GUESS;//input, the gues the user makes.
       
        Count++;//adds every loop
        




        if (GUESS == CORRECT)//has to be double equal sign
        {
            VALID = true;//stops loop
            cout << "Congratulations!\n";//the output once correct
            cout << "You Guessed correctly\n";
          
            cout << Count << " Tries!\n";//number of tries that were taken
            


        }

        else if (GUESS > CORRECT){

            cout << "Sorry, your guess is incorrect\n";
        cout << "Your guess was too high\n";//overestimate
        cout << "Try Again\n";
        cin.clear();//resets to top
        
        }


        else if (GUESS < CORRECT) {


            cout << "Sorry, your guess is incorrect\n";
            cout << "Your guess was too low\n";//underestimate
            cout << "Try Again\n";

            cin.clear();//resets to tope




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
