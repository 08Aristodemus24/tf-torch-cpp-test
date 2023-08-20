#include <iostream>
#include <string>
#include <vector>
#include "test.h"

namespace test{
    class Node{
        std::string data;
        Node* left;
        Node* right;

        Node(std::string data, Node* left, Node* right){
            this->data = data;
            this->left = left;
            this->right = right;
        }

        public:
            void set_data(std::string val){
                this->data = val;
            }

            std::string get_data(){
                return this->data;
            }
    };
}
