#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    bool guessing = true;

    // get a random number
    srand(time(0));
    const int max = 1000;
    const int min = 1;
    int numToGuess = rand() % max + 1;
    
    // let user guess
    int userTry = 0;
    while (guessing) {
        cout << "Guess a number: ";
        cin >> userTry;
        cout << endl;
        

        // comparing guess to number to guess
        if(userTry < numToGuess) {
            cout << "The number was to low. Try again " << endl;
        } else if(userTry > numToGuess) {
            cout << "The number was to high. Try again " << endl;
        } else if(userTry == numToGuess) {
            guessing = false;
            cout << "You won!" << endl;
        }
        else {
            cout << "Error occurred... Exiting..." << endl;
        }
    }

    return 0;
}