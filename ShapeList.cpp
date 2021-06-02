//
//  ShapeList.cpp
//  InheritanceInLab
//
//  Created by Sione on 23/10/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#include "ShapeList.hpp"

void  ShapeList::add(Shape* newShape)
{
    push_back(newShape);
}

ShapeList::~ShapeList()
{
    erase();
}

void  ShapeList::write(ostream& outfile) const
{
    for(const auto& item : *this){
        item->write(outfile);
        outfile << '\n';
    }
}

void ShapeList::erase()
{
    while(!empty())
    {
        pop_front();
    }
}

ostream& operator<<(ostream& outfile, const ShapeList& shapes)
{
    shapes.write(outfile);
    
    return outfile;
}

Shape* ShapeList::findClosestTo (double pX, double pY) const
{
    Shape* n;
    double f;
    double minDist = n->getDistanceTo(pX, pY);
    
    for(const auto& item : *this)
    {
        f = item->getDistanceTo(pX, pY);
        
        if(f < minDist || f == minDist)
        {
            minDist = f;
            n = item;
        }
    }
    
    return n;
}

void ShapeList::printThoseContaining (double pX, double pY) const
{
    for(std::list<Shape*>::const_iterator i = begin(); i != end(); i++){  // for each `Shape*` in the list,
        if((*i)->contains(pX, pY)){                                        // if (pX,pY) is contained by this
            (*i)->write(cout);                                              // Shape, write it to `cout`,
            cout << "\n";                                                   // one listing per line
        }
    }
    return;
}
