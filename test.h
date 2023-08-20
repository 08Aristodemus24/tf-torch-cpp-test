#ifndef TEST_H
#define TEST_H

#include <iostream>

class Node{
    std::string data;
    Node* left;
    Node* right;

    Node(std::string data, Node* left, Node* right);

    public:
        void set_data(std::string data);

        std::string get_data();
};
#endif