#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "DoubleLinkNode.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;

class LinkedList
{
private:
    DoubleLinkNode * head;
    DoubleLinkNode * tail;
public:
    //Constructors
    LinkedList();
    LinkedList(DoubleLinkNode *);

    //Destructor
    //~LinkedList();

    //Accessors
    DoubleLinkNode * getHead()
    {   return head;    }
    DoubleLinkNode * getTail()
    {   return tail;    }

    //Mutators
    void setHead(DoubleLinkNode * h)
    {   head = h;   }
    void setTail(DoubleLinkNode * t)
    {   tail = t;}

    //Push
    void addNode(DoubleLinkNode *);

    //Pop
    void deleteNode(DoubleLinkNode *);

    //Print
    void printList(DoubleLinkNode *, ofstream&);

    //Overloaded []
    DoubleLinkNode* operator[](int);
};

#endif // LINKEDLIST_H
