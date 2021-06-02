//
//  main.cpp
//  InheritanceInLab
//
//  Created by Sione on 23/10/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
#include "Circle.hpp"
#include "Square.hpp"
#include "ShapeList.hpp"
#include "Polygon.hpp"
#include <sstream>

using namespace std;

int main()
{
    //int in1;
    //int in2;
    //int in3;
    
    //from lab test
    /*
    ifstream infile ("oop09in.txt");
    if (! infile)
    {
        cout << "Input file could not be opened!  Exiting!\n";
        exit (1);
    }
    ShapeList shapes2;
    while (!infile.eof())
    {
        string objectType;
        infile >> objectType;
        if(objectType == "Square")
        {
            //add a Square object to the list from the file
            infile >> in1;
            infile >> in2;
            infile >> in3;
            
            shapes2.add(new Square(in1, in2, in3));
        }
        else if (objectType == "Circle")
        {
            //add a Circle object to the list from the file
            infile >> in1;
            infile >> in2;
            infile >> in3;
            
            shapes2.add(new Circle(in1, in2, in3));
        }
        else if (objectType == "Polygon")
        {
            
            int vertCounter = 0;
            int i = 0;
            int p2dArr[20];
            
            //add a Polygon object to the list from the file
            string n;
            getline(infile, n);
            
            istringstream  iss{n};
            
            while(!iss.eof())
            {
                iss >> in1;
                iss >> in2;
                
                p2dArr[i] = in1;
                i++;
                p2dArr[i] = in2;
                i++;
                
                vertCounter++;
            }
            
            Point2D* p2arr= new Point2D[vertCounter];

            for(int i = 0; i < vertCounter; i++)
            {
                p2arr[i].x = p2dArr[2*i];
                p2arr[i].y = p2dArr[2*i+1];
            }
            
            shapes2.add(new Polygon(p2arr, vertCounter));
            
            infile.clear();
            delete []p2arr;
        }
        else
        {
            cout << "Unexpected object type: \'" << objectType << "\'" << endl;
            exit(2);
            
        }
    }  // end while not eof  */
    
    /*
    Circle   50 50   10
    Square   50 50   20
    Circle   50 50   20
    Polygon  40 40  50 60  70 30
    Square   50 50    9
    Circle   60 38    1
    Polygon  60 60  70 80  90 70  100 60  80 50
    Square   50 33    7
    Circle   77 38    4*/
    
    ShapeList shapes2;
    Point2D* p2arr= new Point2D[3];
    p2arr[0].x = 40;
    p2arr[0].y = 40;
    p2arr[1].x = 50;
    p2arr[1].y = 60;
    p2arr[2].x = 70;
    p2arr[2].y = 30;
    
    shapes2.add(new Circle(50,50,10));
    shapes2.add(new Square(50,50,20));
    shapes2.add(new Circle(50,50,20));
    shapes2.add(new Polygon(p2arr, 3));
    shapes2.add(new Square(50,50,9));
    shapes2.add(new Circle(60,38,1));
    
    p2arr= new Point2D[5];
    p2arr[0].x = 60;
    p2arr[0].y = 60;
    p2arr[1].x = 70;
    p2arr[1].y = 80;
    p2arr[2].x = 90;
    p2arr[2].y = 70;
    p2arr[3].x = 100;
    p2arr[3].y = 60;
    p2arr[4].x = 80;
    p2arr[4].y = 50;
    
    shapes2.add(new Polygon(p2arr, 5));
    shapes2.add(new Circle(50,50,20));
    shapes2.add(new Square(50,33,7));
    shapes2.add(new Circle(77,38,4));
    
    
    cout << "Object locations:\n" << shapes2 << endl;
    
    cout << "Enter the coordinates of a point to check for being inside of objects\n";
    double pX, pY;
    cin  >> pX >> pY;
    cout << "\nThe following shapes contain the point "
    << "(" << pX << ", " << pY << "):\n";
    shapes2.printThoseContaining (pX, pY);
}
