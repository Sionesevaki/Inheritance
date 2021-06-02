//
//  Square.hpp
//  InheritanceInLab
//
//  Created by Sione on 23/10/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#ifndef Square_hpp
#define Square_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "Shape.hpp"

using namespace std;

class Square : public Shape
{
public:
    Square
    (double x, double y, double s);
    ~Square();
    double getSide();
    virtual void write(ostream& outfile) const;
    virtual double area (void) const;
    virtual bool contains (double pX, double pY) const;
private:
    double side;
};

#endif /* Square_hpp */
