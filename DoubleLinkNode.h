#ifndef DOUBLELINKNODE_H
#define DOUBLELINKNODE_H
#include "BaseNode.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;

class DoubleLinkNode : public BaseNode
{
protected:
    DoubleLinkNode * next;
    DoubleLinkNode * last;
public:
    //Constructors
    DoubleLinkNode();
    DoubleLinkNode(string, string, string, string, string, DoubleLinkNode*, DoubleLinkNode*);
    DoubleLinkNode(const DoubleLinkNode &, DoubleLinkNode*, DoubleLinkNode*);

    //Accessors
    DoubleLinkNode * getNext()
    {   return next;    }
    DoubleLinkNode * getLast()
    {   return last;    }

    //Mutators
    void setNext(DoubleLinkNode * n)
    {   next = n;   }
    void setLast(DoubleLinkNode * l)
    {   last = l;   }
    void setName(string n)
    {   name = n;   }
};

#endif // DOUBLELINKNODE_H


