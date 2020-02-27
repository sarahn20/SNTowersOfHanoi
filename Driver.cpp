#include "Stack.hpp"
#include <iostream>
#include <string>

int main()
{

    Stack* stack1 = new Stack();
    Stack* stack2 = new Stack();
    Stack* stack3 = new Stack();
    stack1->push("*");
    stack1->push("**");
    stack1->push("***");
    stack1->display();
    std::cout << "    TOWER 1\n";
    stack2->display();
    std::cout << "    TOWER 2\n";
    stack3->display();
    std::cout << "    TOWER 3\n";
    stack2->push(stack1->pop());
    stack1->display();
    std::cout << "    TOWER 1\n";
    stack2->display();
    std::cout << "    TOWER 2\n";
    stack3->display();
    std::cout << "    TOWER 3\n";

  
    return 0;
}