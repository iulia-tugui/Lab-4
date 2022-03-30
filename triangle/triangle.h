//
// Created by Iulia on 22.03.2022.
//

#ifndef LAB4_TRIANGLE_H
#define LAB4_TRIANGLE_H
#include <iostream>
#include "../point/point.h"

using namespace std;

class Triangle {
private:
    Point A;
    Point B;
    Point C;
public:
    /**
    * Constructor
    */
    Triangle();
    /**
     * Constructor with parametres
     * @param M : the M point of the triangle
     * @param N : the N point of the triangle
     * @param P : the P point of the triangle
     */
    Triangle( Point M, Point N, Point P);
    /**
     * Copy Constructor
     * @param triangle
     */
    Triangle(const Triangle &triangle);
    /**
     * Deconstructor
     */
    ~Triangle();
    /**
     * sets new values for the A point's coordinates
     * @param newA
     */
    void setPointA( Point newA);
    /**
     * sets new values for the B point's coordinates
     * @param newB
     */
    void setPointB( Point newB);
    /**
     * sets new values for the C point's coordinates
     * @param newC
     */
    void setPointC( Point newC);
    /**
     * gets the values of the A point's coordinates
     * @return the values of the A point's coordinates
     */
    Point getPointA() const;
    /**
     * gets the values of the B point's coordinates
     * @return the values of the B point's coordinates
     */
    Point getPointB() const;
    /**
     * gets the values of the C point's coordinates
     * @return the values of the C point's coordinates
     */
    Point getPointC() const;
    /**
     * calculates the value of the AB side
     * @return the value of AB
     */
    double getSideAB();
    /**
     * calculates the value of the AC side
     * @return the value of AC
     */
    double getSideAC();
    /**
     * calculates the value of the BC side
     * @return the value of BC
     */
    double getSideBC();
    /**
     * checks if the AB, AC, BC sides can form a triangle
     * @return True: if ABC can be a triangle, False: if not
     */
    bool validation();
    /**
     * calculates the value of the ABC triangle's perimeter
     * @return ABC triangle's perimeter
     */
    double getPerimeter();
    /**
     * calculates the value of the ABC traingle's area
     * @return ABC triangle's area
     */
    double getArea();
    /**
     * verify if two triangles have sides with the same values
     * @param triangle1
     * @param triangle2
     * @return True: if they have sides with the same values, False: if not
     */
    friend bool operator==(const Triangle &triangle1, const Triangle &triangle2);
    /**
     * loads a triangle from an input stream
     * @param is input stream
     * @param triangle
     * @return output stream
     */

    friend std::istream& operator>>(std::istream &is, Triangle &triangle);
    /**
     * saves a triangle into an output stream
     * @param os output stream
     * @param triangle
     * @return input stream
     */
    friend std::ostream& operator<<(std::ostream &os, const Triangle &triangle);
};
#endif //LAB4_TRIANGLE_H
