//
//  Circle.cpp
//  InheritanceInLab
//
//  Created by Sione on 23/10/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#include "Circle.hpp"

Circle::Circle (double x, double y, double r) : Shape {x, y}
{
    cout << "DEBUG: Executing Circle constructor...\n";
    radius = r;
    return;
}

Circle::~Circle()
{
    cout << "Destructing Circle" << endl;
    delete this;
}
void Circle::write(ostream& outfile) const
{
    outfile << "radius: " << radius << endl;
}
    
double Circle::area (void) const
{
    return (M_PI*(radius*radius));
}
    
bool Circle::contains (double pX, double pY) const
{
    if(abs(((0-pX)*(0-pX))) + abs(((0-pY)*(0-pY))) < radius*radius)
    {
        return true;
    }
    else
        return false;
}
    
ostream& operator<< (ostream& outfile, const Circle& cir)
{
    cir.write(outfile);
        
    return outfile;
}
    

