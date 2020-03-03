#include "Tower.hpp"
#include <iostream>

int main()
{
    Tower* t1 = new Tower(1);
    Tower* t2 = new Tower(2);
    Tower* t3 = new Tower(3);
    t1->push(new Disk(8));
    t1->push(new Disk(4));
    t1->push(new Disk(2));
    t1->display();
    t2->display();
    t3->display();

    while(t3->getCount() < 3)
    {
        int popTower;
        std::cout << "Enter the tower number you'd like to pop a disk from: ";
        std::cin >> popTower;
        int pushTower;
        std::cout << "Now enter the tower number you'd like to push a disk to: ";
        std::cin >> pushTower;
        if((popTower == 1) && (t1->getCount() > 0))
        {
            if((pushTower == 2) && (t2->getCount() < 3))
            {
                t2->push(t1->pop());
                t1->display();
                t2->display();
                t3->display(); 
            }
            else if((pushTower == 3) && (t3->getCount() < 3))
            {
                t3->push(t1->pop());
                t1->display();
                t2->display();
                t3->display();
            }
            else
            {
                std::cout << "Error! Try again.\n";
            }
        }
        else if((popTower == 2) && (t2->getCount() > 0))
        {
            if((pushTower == 1) && (t1->getCount() < 3))
            {
                t1->push(t2->pop());
                t1->display();
                t2->display();
                t3->display();
            }
            else if((pushTower == 3) && (t3->getCount() < 3))
            {
                t3->push(t2->pop());
                t1->display();
                t2->display();
                t3->display();
            }
            else
            {
                std::cout << "Error! Try again.\n";
            }
        }
        else if((popTower == 3) && (t3->getCount() > 0))
        {
            if((pushTower == 1) && (t1->getCount() < 3))
            {
                t1->push(t3->pop());
                t1->display();
                t2->display();
                t3->display();
            }
            else if((pushTower == 2) && (t2->getCount() < 3))
            {
                t2->push(t3->pop());
                t1->display();
                t2->display();
                t3->display();
            }
            else
            {
                std::cout << "Error! Try again.\n";
            }
        }
        else
        {
            std::cout << "Did you enter an out-of-range number or pop from an empty tower? Try again!\n";
        }
    }
    if(t3->getCount() == 3)
    {
        std::cout << "WINNER!!!\n";
    }
    return 0;
}