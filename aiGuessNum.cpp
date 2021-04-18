#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    srand(time(0));

    // vars
    bool guessing = true;
    const int max = 1000;
    const int min = 1;

    
    // getting a number the computer needs to find
    int numberToFind;
    cout << "Enter a number between " << max << " and " << min << ": ";
    cin >> numberToFind;
    
    
    // check wether it is in the range of max and min
    while(numberToFind > max || numberToFind < min) {
        if(numberToFind > max) {
            cout << "Your given number is too high. It must be below " << max << " . Try again." << endl;
            cout << "Enter new number: ";
            cin >> numberToFind;
        } else if(numberToFind < min) {
            cout << "Your given number is too low. It must be above " << min << " . Try again." << endl;
            cout << "Enter new number: ";
            cin >> numberToFind;
        }
    }

    // now let the computer guess and try to find the number
    int upperBound = max;
    int lowerBound = min;
    while(guessing) {
        int guessedNumber = rand() % upperBound + 1;
        // asking user if the number is correct or not
        cout << "The computer guessed: " << guessedNumber << ". " << endl << endl;
        cout << "Is the number correct? [y/n] ";
        char correctConfirm;
        cin >> correctConfirm;
        if (correctConfirm == 'y') {
            guessing = false;
        } else if (correctConfirm == 'n') {
            char lowerOrGreater;
            cout << "Is the number lower or greater than yours? [l/g] ";
            cin >> lowerOrGreater;
            if(lowerOrGreater == 'l') {
                lowerBound = guessedNumber;
            } else if(lowerOrGreater == 'g') {
                upperBound = guessedNumber;
            }
        }
    }       


    return 0;
}