using namespace std;
#include <iostream>
#include <string>
#ifndef __NODE_H__


#define __NODE_H__

class Node {
    public: 
        string data;
        Node* parent;
        Node* right;
        Node* left;
        Node();
        Node(string);
        Node(string, Node*, Node*, Node*);
};

#endif;