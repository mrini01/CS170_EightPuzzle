#include "algorithm.h"
#include "node.h"
#include "puzzle.h"
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
        Node* root;
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

        root = Node(puzzle, n, m);
    }   

    int userAlgorithm;

    cout << "Enter your choice of algorithm." << endl;
    cout << "1 - Uniform Cost Search" << endl;
    cout << "2 - A* with the Misplaced Tile heuristic" << endl;
    cout << "3 - A* with the Euclidean distance heuristic" << endl;

    cin >> userAlgorithm;

    if (userAlgorithm == 1) {
        uniform_search(root);
    }

    else if (userAlgorithm == 2) {
        a_star_search_misplaced(root);
    }

    else if (userAlgorithm ==3) {
        a_star_search_euclidean(root);
    }
    
    else {
        cout << "ERROR: Invalid algorithm!";
        return 0;
    }
}