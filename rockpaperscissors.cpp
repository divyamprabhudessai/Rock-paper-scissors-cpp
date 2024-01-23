#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    srand(time(0));

    const string choices[] = {"Rock", "Paper", "Scissors"};

    while (true) {
        int userChoice;

        cout << "Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors, or -1 to exit): ";
        cin >> userChoice;

        if (userChoice == -1) {
            cout << "Exiting the game. Thanks for playing!" << endl;
            break;
        }

        if (userChoice < 0 || userChoice > 2) {
            cout << "Invalid choice! Please enter 0, 1, 2, or -1 to exit." << endl;
            continue;
        }

        int computerChoice = rand() % 3;

        cout << "You chose: " << choices[userChoice] << endl;
        cout << "Computer chose: " << choices[computerChoice] << endl;

        int result = (userChoice - computerChoice + 3) % 3;

        if (result == 0) {
            cout << "It's a tie!" << endl;
        } else if (result == 1) {
            cout << "You win!" << endl;
        } else {
            cout << "Computer wins!" << endl;
        }
    }

    return 0;
}
