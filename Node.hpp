#include <string>
using namespace std;

class Node
{
    private:
        string payload;
        Node* nextNode;

    public:
        Node(string payload);
        string getPayload();
        void setNextNode(Node* n);
        Node* getNextNode();
};