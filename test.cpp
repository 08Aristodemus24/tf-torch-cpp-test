#include <iostream>
#include "test.h"

using namespace test;

int main(int argc, char** argv){
    std::cout << "this is a test";

    test::Node my_node = new test::Node("Larry", NULL, NULL);

    std::cout << my_node.get_data();
}