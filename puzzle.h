#include <iostream>
#ifndef __PUZZLE_H__
#define __PUZZLE_H__
#include "node.h"

using namespace std;

class Puzzle {
    private:
    Node* root;

    public:
        void display_puzzle(const Node* head); // display
        bool check_if_solved(const Node* head); // checks if solved
        bool check_duplicate(const Node* parent); // checks a node to see if there is a duplicate puzzle
        void add_puzzle(Node* parent); // adds a node's puzzle to a list of puzzle to check later
};

#endif