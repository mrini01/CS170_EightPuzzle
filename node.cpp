using namespace std;
#include <iostream>
#include "Node.h"

Node::Node() {
    data = "";
    parent = nullptr;
    right = nullptr;
    left = nullptr;
}

Node::Node(string d, Node* p, Node* r, Node* l) {
    data = d;
    parent = p;
    right = r;
    left = l;
}

Node::Node(string d) {
    data = d;
}