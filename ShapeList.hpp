//
//  ShapeList.hpp
//  InheritanceInLab
//
//  Created by Sione on 23/10/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#ifndef ShapeList_hpp
#define ShapeList_hpp

#include <stdio.h>
#include <list>
#include <string>
#include <iostream>
#include "Shape.hpp"

using namespace std;

class ShapeList : private list <Shape*>
{
public:
    ShapeList(void) = default;
    ~ShapeList();
    void     add
    (Shape* newShape);
    void write
    (ostream& outfile) const;
    void erase();
    Shape* findClosestTo (double pX, double pY) const;
    void printThoseContaining (double pX, double pY) const;
};

ostream& operator<<
(ostream& outfile, const ShapeList& shapes);

#endif /* ShapeList_hpp */
