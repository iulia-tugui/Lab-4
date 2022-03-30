//
// Created by Iulia on 22.03.2022.
//
#include "triangle.h"
#include <cmath>

Triangle::Triangle() {
    this->A = Point(0,0);
    this->B = Point(0,0);
    this->C = Point(0,0);
}
Triangle::Triangle( Point M, Point N, Point P) {
    this->A = M;
    this->B = N;
    this->C = P;
}
Triangle::Triangle(const Triangle &triangle) {
    this->A = triangle.A;
    this->B = triangle.B;
    this->C = triangle.C;
}

Triangle::~Triangle() = default;

void Triangle::setPointA( Point newA){
    this->A = newA;
}
void Triangle::setPointB(Point newB){
    this->B = newB;
}
void Triangle::setPointC( Point newC){
    this->C = newC;
}
Point Triangle::getPointA() const {
    return A;
}
Point Triangle::getPointB() const {
    return B;
}
Point Triangle::getPointC() const {
    return C;
}
double Triangle::getSideAB() {
    double AB;
    AB = sqrt((B.getValueX() - A.getValueX()) * (B.getValueX() - A.getValueX()) +
              (B.getValueY() - A.getValueY()) * (B.getValueY() - A.getValueY()));
    return AB;
}
double Triangle::getSideAC() {
    double AC;
    AC = sqrt((C.getValueX() - A.getValueX()) * (C.getValueX() - A.getValueX()) +
              (C.getValueY() - A.getValueY()) * (C.getValueY() - A.getValueY()));
    return AC;
}
double Triangle::getSideBC() {
    double BC;
    BC = sqrt((C.getValueX() - B.getValueX()) * (C.getValueX() - B.getValueX()) +
              (C.getValueY() - B.getValueY()) * (C.getValueY() - B.getValueY()));
    return BC;
}
bool Triangle::validation()
{
    double a,b,c;
    a = getSideBC();
    b = getSideAC();
    c = getSideAB();
    if(a>0 && b>0 && c>0 && (a+b > c) && (a+c > b) && (b+c > a))
        return true;
    return false;
}
double Triangle::getPerimeter() {
    double p;
    p = getSideAC() + getSideAB() + getSideBC();
    return p;
}
double Triangle::getArea() {
    double a, semiPerimeter;
    semiPerimeter = (getSideBC() + getSideAB() + getSideAC())/2;
    a = sqrt(semiPerimeter * (semiPerimeter - getSideAB()) * (semiPerimeter - getSideAC()) * (semiPerimeter - getSideBC()));
    return a;
}
bool operator==(const Triangle &triangle1, const Triangle &triangle2) {
    return (triangle1.A == triangle2.A) && (triangle1.B == triangle2.B) &&
           (triangle1.C == triangle2.C);
}

std::istream &operator>>(std::istream &is, Triangle &triangle) {
    Point A, B, C;
    std::cout << "A: "; is >> A;
    triangle.A = A;
    std::cout << "B: " ; is >> B;
    triangle.B = B;
    std::cout << "C: "; is >> C;
    triangle.C = C;
    return is;
}

std::ostream &operator<<(std::ostream &os, const Triangle &triangle) {
    os << "Triangle: " << '\n' << "{" << '\n' << " A: " << triangle.A << " B: "
       << triangle.B << " C: " << triangle.C << "}" <<
       '\n';
    return os;
}

