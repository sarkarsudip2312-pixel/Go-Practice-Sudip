#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    
    srand(time(0));
    
    int secret = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "============================\n";
    cout << "    NUMBER GUESSING GAME    \n";
    cout << "============================\n";

    cout << "I have selected a number between 1 and 100.\n";
    cout << "Can you guess it?\n\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        
        attempts++;

        if (guess > secret) {
            cout << "Too High! Try a smaller number.\n\n";
        }
        else if (guess < secret) {
            cout << "Too Low! Try a bigger number.\n\n";
        }
        else {
            cout << "\nCongratulations! You Won! ??\n";
            cout << "Secret Number: " << secret << endl;
            cout << "Total Attempts: " << attempts << endl;
        }

    } while (guess != secret);

    cout << "\nThanks for playing!\n";

    return 0;
}
