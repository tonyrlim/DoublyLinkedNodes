#include "LinkedList.h"
#include <iomanip>
#include <fstream>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

LinkedList::LinkedList()
{
    head = NULL;
    tail = NULL;
}

LinkedList::LinkedList(DoubleLinkNode * node)
{
    head = node;
}

void LinkedList::addNode(DoubleLinkNode * node)
{

    if(head == NULL)
    {
        head = node;
        tail = node;
    }
    else
    {

        node->setLast(tail);
        node->setNext(NULL);
        tail->setNext(node);
        tail = node;

    }
}

void LinkedList::deleteNode(DoubleLinkNode * node)
{
    if(head == NULL)
    {
        return;
    }
    else
    {
        if(node == head)
        {
            head = node->getNext();
            delete node;
            head->setLast(NULL);
        }
        else if(node == tail)
        {
            tail = node->getLast();
            delete node;
            tail->setNext(NULL);
        }
        else
        {
            node->getLast()->setNext(node->getNext());
            node->getNext()->setLast(node->getLast());
            delete node;
        }
    }
}


void LinkedList::printList(DoubleLinkNode * node, ofstream &out)
{
    if(node==NULL)
        return;
    else
    {
        out << *node;
        out << endl;
    }
    printList(node->getNext(), out);
}


DoubleLinkNode* LinkedList::operator[](int i)
{
    int counter = 0;
    DoubleLinkNode * current = head;
    while(counter < i && current != NULL)
    {
        current = current->getNext();
        counter++;
    }
    return current;
}
