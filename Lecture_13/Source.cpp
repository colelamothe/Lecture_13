// Lecture 13 Algorithm Development

#include <iostream>


using namespace std;

int main() {
	// Three types of loop: while, for, do/while
	// These are augmented by: break, continue

	int i = 0;

	// While will loop the statements enclosed in the loop so long as the condition is true, this check is run before the loop can run.
	while (i < 9) {
		cout << i << endl;
		i++;	// increments the check variable by one each loop. This ensures the program will exit and not get stuck in the loop and serves as a counter.
	}

	// example 1. Calculates the number of years required for interest to bring an account balance to a desired amount.
	// Variable declaration
	int initAmount = 10000; // Starting account balance
	const int TARGET = 2 * initAmount; // Good naming practise is to use all caps for constant variables
	int currentAmount = initAmount; // Initializing the variable used to track year to year balance.
	const double RATE = 1.05; // 5% interest rate
	int years = 0; // initializes the counter at 0 to properly count for the final output.

	// Interest loop
	while (currentAmount <= TARGET) {
		currentAmount = currentAmount *RATE;
		years++;
	}
	cout << "It will take " << years << " years to reach the target balance" << endl;

	// The for loop is similar to a while loop but is specifically designed to iterate over a counter without needing a seperate declaration for the counter

	// for (variable declaration; check against that variable; increment/decrement of variable)
	// Increment of the variable i++ happens at the bottom of the loop after all other lines inside have been run
	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}

	system("pause");
	return 0;
}