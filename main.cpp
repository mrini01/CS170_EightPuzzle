#include <iostream>
using namespace std;

int main() {

    cout << "Welcome to the 8 puzzle solver!" << endl;
    cout << "Type \"1\" to use a default puzzle, or \"2\" to enter your own puzzle." << endl;
    int userInput;
    cin >> userInput;

    if (userInput == 1) {
        cout << "Puzzle" << endl;
    }

    else {
        const int ROWS = 3;
        const int COLS = 3;
        int x;
        int n;
        int m;
        bool hasZero = false;

        int puzzle[ROWS][COLS];
        cout << "Enter your puzzle, use a zero to represent the blank." << endl;
        cout << "Enter the first row, use space or tabs between numbers:" << endl;

        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < ROWS; ++j) {
                cin >> x;
                puzzle[i][j] = x;
                if (x == 0) {
                    hasZero = true;
                    n = i;
                    m = j;
                }
            }
        }
        
        if (!hasZero) {
            cout << "Puzzle does not contain a 0!" << endl;
            return 0;
        }
    }   
}