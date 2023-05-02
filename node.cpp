using namespace std;
#include <iostream>
#include "Node.h"

Node::Node(int data[3][3], int n, int m) {
    Node* root = new node();
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            root->GameState[i][j] = data[i][j];
        }
    }
    root->right = nullptr;
    root->left = nullptr;
    root-> up = nullptr;
    root->down = nullptr;
    root->n = n;
    root->m = m;
    return root;
}

void Node::expand_node(Node* &parent) {
    // add in here!
}