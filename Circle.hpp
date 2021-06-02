//
//  Circle.hpp
//  InheritanceInLab
//
//  Created by Sione on 23/10/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
#include "Shape.hpp"

using namespace std;

class Circle : public Shape
{
public:
    Circle
    (double x, double y, double r);
    ~Circle();
    double getRadius();
    virtual void write(ostream& outfile) const;
    virtual double area (void) const;
    virtual bool contains (double pX, double pY) const;
private:
    double radius;
};

ostream& operator<< (ostream& outfile, const Circle& cir);

#endif /* Circle_hpp */
