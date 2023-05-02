#ifndef __ALGORITHM_H__
#define __ALGORITHM_H_
#include "node.h"
#include <iostream>

using namespace std;

class Algorithm {
    public:
        void uniform_search(Node* parent);
        void a_star_search_misplaced(Node* parent);
        void a_star_search_euclidean(Node* parent);
};

#endif