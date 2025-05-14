
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    int maxAttempts = 7;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Guess a number between 1 and 100. You have " << maxAttempts << " attempts." << endl;

    while (attempts < maxAttempts) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
            break;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }
    }

    if (guess != secretNumber) {
        cout << "Sorry! You've used all attempts. The number was: " << secretNumber << endl;
    }

    return 0;
}
