#include "Stack.hpp"
#include <iostream>
#include <string>

Stack::Stack()
{
    this->top = 0;
}

void Stack::push(string payload)
{
    Node* n = new Node(payload);
    if(top)
    {
        //we have at least one element on our stack
        n->setNextNode(this->top);
        this->top = n;
    }
    else
    {
        this->top = n;
    }
    
}

string Stack::pop()
{
    string valueToReturn = this->top->getPayload();
    Node* temp = this->top;
    top = top->getNextNode();
    temp->setNextNode(0);
    delete temp;
    return valueToReturn;
}

string Stack::peek()
{
    return this->top->getPayload();
}

void Stack::display()
{
    Node* currNode = this->top;
    if(currNode)
    {
        while(currNode)
        {
            std::cout << currNode->getPayload() << "\n";
            currNode = currNode->getNextNode();
        }
        std::cout << "~~~~~~~~~~~\n";
    }
    else
    {
        std::cout << "~~~~~~~~~~~~\n";
    }
}