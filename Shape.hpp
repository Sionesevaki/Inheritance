//
//  Shape.hpp
//  InheritanceInLab
//
//  Created by Sione on 23/10/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#ifndef Shape_hpp
#define Shape_hpp

#include <stdio.h>
#include <string>
#include <math.h>
#include <iostream>
#include <cmath>

using namespace std;

class Shape
{
public:
    Shape(double x, double y);
    ~Shape();
    virtual void  write(ostream& outfile) const;
    double getDistanceTo (double pX, double pY) const;
    virtual double area (void) const = 0;
    virtual bool contains (double pX, double pY) const = 0;
private:
    double refX;
    double refY;
};

ostream& operator<< (ostream& outfile, Shape& shape);

#endif /* Shape_hpp */
