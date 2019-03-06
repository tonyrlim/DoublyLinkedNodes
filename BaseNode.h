#ifndef BASENODE_H
#define BASENODE_H

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;

class BaseNode
{
protected:
    string name;
    string highScore;
    string initials;
    string plays;
    string revenue;
public:
    //Constructors
    BaseNode();
    BaseNode(string, string, string, string, string);
    BaseNode(const BaseNode &obj);

    //Accessors
    string getName()
    {   return name;    }
    string getHighScore()
    {   return highScore;   }
    string getInitials()
    {   return initials;    }
    string getPlays()
    {   return plays;   }
    string getRevenue()
    {   return revenue; }

    //Mutators
    virtual void setName(string n) = 0;
    //{   name = n;   }
    void setHighScore(string s)
    {   highScore = s;  }
    void setInitials(string i)
    {   initials = i;   }
    void setPlays(string p)
    {   plays = p;  }
    void setRevenue(string r)
    {   revenue = r;    }

    //Overloaded <<
    friend ostream& operator<<(ostream&, const BaseNode&);

    //Overloaded >>
    friend istream& operator>>(istream&, BaseNode&);
};

#endif // BASENODE_H

