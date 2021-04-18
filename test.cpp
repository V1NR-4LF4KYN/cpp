#include <iostream>
#include <stdlib.h> // srand, rand

using namespace std;


int main() {
	
	srand(time(0)); // initiation of srand
	
	// variables
	int val; // value of thrown dice
	const int maxValues = 2; // maximum of array of dice values
	int values[maxValues]; // array with saved dice values after they are thrown

	for(int i=0; i<2; ++i) { // throw to dice or actually generate to random numbers(ints)
		val = rand() % 6 + 1;
		values[i] = val; // save them to array 'values'
		cout << "The value is: " << val << endl; // print values
	}
	cout << endl; // space in output for readability

	// adding values / getting sum of values
	int sum = 0;
	for(int i=0; i < maxValues; ++i) { // iterating through values
		sum += values[i]; // adding each value to var sum
	}
	cout << "The sum of values equals to: " << sum << endl; // printing sum

	// comparing the sum to five
	cout << "Therefore it is ";
	if(sum < 5) {
		cout << "BELOW 5." << endl;
	} else if(sum==5) {
		cout << "EQUAL to 5." << endl;
	} else {
		cout << "ABOVE 5." << endl;
	}

	return 0; // exit return statement
}
// end of program.

