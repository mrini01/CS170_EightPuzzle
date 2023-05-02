using namespace std;
#include <iostream>
#include <string>
#ifndef __NODE_H__


#define __NODE_H__

class Node {
    private:
        Node* right; // node of parent that is the right move
        Node* left; // node of parent that is the left move
        Node* up; // node of parent that is the up move
        Node* down; // node of parent that is the down move
        Node* n; // row
        Node* m; // column

    public:
        Node();
        Node(int data[3][3], int n, int m); // creating a node that has null pointers
        void expand_node(Node* &parent);
};

#endif;