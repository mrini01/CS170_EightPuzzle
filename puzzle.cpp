#include <iostream>
#include "node.h"
#include "puzzle.h"

using namespace std;

void Puzzle::display_puzzle(const Node* head) {
    this->root = nullptr;
}

bool Puzzle::check_if_solved(const Node* head) {
    return false;
}

bool Puzzle::check_duplicate(const Node* head) {
    return false;
}

void Puzzle::add_puzzle(Node* parent) {
    this->root = nullptr;
}