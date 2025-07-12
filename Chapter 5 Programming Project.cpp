// Chapter 5 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
//this code will make a pattern, Pattern A, followed by a second pattern, Pattern B
int main()
{
    //not to myself, Pattern A goes from 1-10, B goes 10-1

    //This will be the beginning of Pattern A
    int P = 1;//THIS IS THE VALUE FOR 1 BEACUSE BOTH START OR STOP AT ONE
    int L = 10; //THIS IS THE VALUE FOR 10 AS BOTH INVOLVE 10
    int PO = 1;
    //ignore all variables defined above, essentially useless 
    cout << "Pattern A\n";

    for (int P=1; P <= 10; P++) {



        for (int PO=1; PO <= P; PO++) {

            cout << '+';//creates output
        }
       
        
        
        
        cout << endl;
        
        
       
    }

    cout << "Pattern B\n";
    //essentially identical to other code 
    for (int P=10; P >= 1; P--) {//this is the only difference between the two



        for (int PO=1; PO <= P; PO++) {

            cout << '+';//creates output
        }




        cout << endl;



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
