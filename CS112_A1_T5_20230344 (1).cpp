//Author: mohamed esam abdelmonem
// ID: 20230344
// Game: 1
// version: 1.0
// Date: 1/3/2024
// section: s21
#include <iostream> 
#include <limits> 
using namespace std; 

int main() {
    cout << "Welcome to the game number1" << endl; // Display welcome message
    cout << "Two players start from 0. Alternatively, add a number from 1 to 10 to the sum. The player who reaches 100 wins." << endl; // Display game instructions

    int sum = 0;
    while (sum < 100) {
        int move1; 
        cout << "Player 1: Please choose a number from 1 to 10: "; // Prompt player 1 for input
        cin >> move1; 

        // Input validation for player 1's move
        while (cin.fail() || move1 <= 0 || move1 > 10) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a number from 1 to 10: "; // Prompt for valid input
            cin >> move1; 
        }

        // Check if player 1's move will make the sum exceed 100
        while (sum + move1 > 100) {
            cout << "Player 1: Please choose a number that does not make sum > 100: "; // Prompt for a valid move
            cin >> move1; 
        }
        
        sum += move1;
        cout << "sum now = " << sum << endl; 
        if (sum >= 100) {
            cout << "Player 1 is the winner!" << endl; // Declare player 1 as the winner if sum is 100 or more
            break; // Exit the loop
        }

        int move2; 
        cout << "Player 2: Please choose a number from 1 to 10: "; // Prompt player 2 for input
        cin >> move2; 

        // Input validation for player 2's move
        while (cin.fail() || move2 <= 0 || move2 > 10) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a number from 1 to 10: "; // Prompt for valid input
            cin >> move2; 
        }

        // Check if player 2's move will make the sum exceed 100
        while (sum + move2 > 100) {
            cout << "Player 2: Please choose a number that does not make sum > 100: "; // Prompt for a valid move
            cin >> move2; 
        }
        
        sum += move2; 
        cout << "sum now = " << sum << endl;
        if (sum >= 100) {
            cout << "Player 2 is the winner!" << endl; // Declare player 2 as the winner if sum is 100 or more
            break; // Exit the loop
        }
    }

    return 0;
}