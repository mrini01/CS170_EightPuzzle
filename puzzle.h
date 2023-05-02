using namespace std;
#include <iostream>
#ifndef __PUZZLE_H__
#define __PUZZLE_H__
#include "node.h"

class Puzzle {
    private:
    Node* root

    public:
        void display_puzzle(const Node *head); // display
        bool check_if_solved(const Node *head); // checks if solved
};

#endif
