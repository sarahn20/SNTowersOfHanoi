#include "Node.hpp"
#include <iostream>
#include <string>
using namespace std;

Node::Node(string payload)
{
    this->payload = payload;
    this->nextNode = 0;
}

string Node::getPayload()
{
    return this->payload;
}

void Node::setNextNode(Node* n)
{
    this->nextNode = n;
}

Node* Node::getNextNode()
{
    return this->nextNode;
}