#include <cassert>
#include "../point/point.h"
#include "../triangle/triangle.h"

//
// Created by Iulia on 22.03.2022.
//
void testConstructors() {
    Point A = Point(1, 2);
    Point B = Point(-1, 2);
    Point C = Point(-1, -1);
    Triangle abc = Triangle(A, B, C);
    assert(abc.getPointA() == Point(1, 2));
    assert(abc.getPointB() == Point(-1, 2));
    assert(abc.getPointC() == Point(-1, -1));

    Triangle mnp = abc;
    assert(mnp.getPointA() == Point(1, 2));
    assert(mnp.getPointB() == Point(-1, 2));
    assert(mnp.getPointC() == Point(-1, -1));

    Point p = Point(1, 2);
    assert(p.getValueX() == 1);
    assert(p.getValueY() == 2);

    Point a = p;
    assert(a.getValueX() == 1);
    assert(a.getValueY() == 2);
}

void testSetters() {
    Triangle abc;
    abc.setPointA(Point(1, 2));
    abc.setPointB(Point(-1, 2));
    abc.setPointC(Point(-1, -1));

    assert(abc.getPointA() == Point(1, 2));
    assert(abc.getPointB() == Point(-1, 2));
    assert(abc.getPointC() == Point(-1, -1));

    Point p;
    p.setValueX(1);
    p.setValueY(2);
    assert(p.getValueX() == 1);
    assert(p.getValueY()== 2);
}

void testGetters() {
    Point A = Point(1, 2);
    Point B = Point(-1, 2);
    Point C = Point(-1, -1);
    Triangle abc = Triangle(A, B, C);

    assert(abc.getPointA() == Point(1, 2));
    assert(abc.getPointB() == Point(-1, 2));
    assert(abc.getPointC() == Point(-1, -1));

    assert(abc.getSideAB() == 2);

}
void testPerimeter(){
    Point A = Point(0, 8);
    Point B = Point(6, 0);
    Point C = Point(0, 0);
    Triangle abc = Triangle(A, B, C);
    assert(abc.getPerimeter()==24);
}
void testArea(){
    Point A = Point(0, 8);
    Point B = Point(6, 0);
    Point C = Point(0, 0);
    Triangle abc = Triangle(A, B, C);
    assert(abc.getArea()==24);
}

void testBoolOperator() {
    Point A = Point(1, 2);
    Point B = Point(-1, 2);
    Point C = Point(-1, -1);
    Triangle abc = Triangle(A, B, C);
    Triangle mnp = Triangle(A, B, C);
    assert(abc == mnp);

    Point p = Point(1, 2);
    Point cp = Point(1,2 );
    assert(p == cp);
}

void runTests() {
    testConstructors();
    testGetters();
    testSetters();
    testBoolOperator();
    testPerimeter();
    testArea();
}
