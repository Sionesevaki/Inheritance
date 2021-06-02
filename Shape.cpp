//
//  Shape.cpp
//  InheritanceInLab
//
//  Created by Sione on 23/10/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#include "Shape.hpp"

Shape::Shape (double x, double y)
{
    cout << "DEBUG: Executing Shape constructor...\n";
    refX = x;
    refY = y;
    return;
}

Shape::~Shape()
{
    cout << "Destructing Shape" << endl;
    delete this;
}

void Shape::write(ostream& outfile) const
{
    outfile << "refX: " << refX << endl;
    outfile << "refY: " << refY << endl;
}

ostream& operator<< (ostream& outfile, Shape& shape)
{
    shape.write(outfile);
    
    return outfile;
}

double Shape::getDistanceTo(double pX, double pY) const
{
    return double(sqrt(((refX-pX)*(refX-pX))+((refY-pY)*(refY-pY))));
}

