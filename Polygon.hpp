//
//  Polygon.hpp
//  InheritanceInLab
//
//  Created by Sione on 2/11/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#ifndef Polygon_hpp
#define Polygon_hpp

#include <stdio.h>
#include "Shape.hpp"



/**
 * Point2D is a 2-dimensional Cartesian
 * point with Real-valued coordinates.
 */
class Point2D{
public:
    // attributes:
    double x;   ///< x-coordinate of this point
    double y;   ///< y-coordinate of this point
    // constructors:
    /**
     * construct a Point2D given the x- and y-
     * coordinates of its location.
     */
    Point2D(double x, double y) : x(x), y(y) { }
    /**
     * default-construct a Point2D at the origin.
     */
    Point2D() : x(0), y(0)                   { }
};

std::ostream& operator<<(std::ostream& strm, const Point2D& point);

class Polygon : public Shape
{
public:
    Polygon
    (const Point2D* vertices, int vertex_count);
    ~Polygon();
    virtual void write(ostream& strm) const;
    virtual double area(void) const;
    virtual bool contains (double pX, double pY) const;
private:
    Point2D* vertices;
    int      vertex_count;
};

#endif /* Polygon_hpp */
