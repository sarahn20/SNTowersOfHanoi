#include "Disk.hpp"

class Tower
{
    private:
        int count;
        int towerNumber;
        Disk* top;

    public:
        Tower(int towerNumber);
        int getCount();
        void push(Disk* d);
        Disk* pop();
        Disk* peek();
        void display();
};