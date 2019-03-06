#include "DoubleLinkNode.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

DoubleLinkNode::DoubleLinkNode()
{
    next = NULL;
    last = NULL;
}

DoubleLinkNode::DoubleLinkNode(string n, string hs, string init, string p, string r, DoubleLinkNode * nptr, DoubleLinkNode * lptr) : BaseNode(n, hs, init, p, r)
{
    next = nptr;
    last = lptr;
}

DoubleLinkNode::DoubleLinkNode(const DoubleLinkNode &obj, DoubleLinkNode* nptr, DoubleLinkNode* lptr) : BaseNode(obj)
{
    next = nptr;
    last = lptr;
}


