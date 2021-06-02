//
//  Polygon.cpp
//  InheritanceInLab
//
//  Created by Sione on 2/11/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#include "Polygon.hpp"

/**
 * Overloaded stream insertion operator to allow a Point2D to
 * be displayed in a standard ostream.
 * @param strm      the stream to write the Point2D into
 * @param point     the Point2D object to output
 * @return          the modified `strm` is returned
 */
std::ostream& operator<<(std::ostream& strm, const Point2D& point)
{
    return strm << "(" << point.x << ", " << point.y << ")";
}

Polygon::Polygon(const Point2D* verts, int vertcount) : Shape { verts[0].x, verts[1].y}
{
    cout << "constructing polygon" << endl;
    vertex_count = vertcount;
    
    vertices = new Point2D[vertex_count];
    
    for(int i = 0; i < vertex_count; i++)
    {
        vertices[i] = verts[i];
    }
}

Polygon::~Polygon()
{
    delete []vertices;
}

void Polygon::write(ostream& strm) const
{
    for(int i = 0; i < vertex_count; i++)
    {
        strm << "x: " << vertices[i].x << " y: " << vertices[i].y << endl;
    }
}

double Polygon::area(void) const
{
    double area;
    
    for(int i = 0; i < vertex_count; i++)
    {
        area += ((vertices[i].x * vertices[i+1].y) - (vertices[i+1].x * vertices[i].y));
    }
    
    return abs(area/2);
}
    
bool Polygon::contains(double pX, double pY) const
{
    int i, j;
    
    for(i = 0, j = vertex_count - 1; i < vertex_count; j = i++)
    {
        if( ( (vertices[i].y >= pY ) != (vertices[j].y >= pY) ) && (pX <= (vertices[j].x - vertices[i].x) * (pY - vertices[i].y) / (vertices[j].y - vertices[i].y) + vertices[i].x)
           )
            return true;
    }
    
    return false;
}




