//
//  Square.cpp
//  InheritanceInLab
//
//  Created by Sione on 23/10/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#include "Square.hpp"

Square::Square (double x, double y, double s) : Shape {x, y}
{
    cout << "DEBUG: Executing square constructor...\n";
    side = s;
    return;
}

Square::~Square()
{
    cout << "Destructing square" << endl;
    delete this;
}

void Square::write(ostream& outfile) const
{
    outfile << "side: " << side << endl;
}
    
double Square::area(void) const
{
    return (side*side);
}
    
bool Square::contains (double pX, double pY) const
{
    if((abs((pX-0)+(pY-0)) + abs((pX-0)+(pY-0))) < side)
    {
        return true;
    }
    else
        return false;
}

/////////////////private function/////////////////

double Square::getSide()
{
    return side;
}
